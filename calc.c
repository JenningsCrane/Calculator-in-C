#include "calc.h"

int compute_graph(const char* str, double* x, double* y, size_t len) {
  Stack stack = STACK_ZERO;

  int err = parser(str, &stack);
  for (int i = 0; (i < (int)len) && (!err); ++i) {
    err = calculation(y + i, x[i], stack);
  }

  clear_stack(&stack);

  return err;
}

int compute_line(const char* src, double* result, double x) {
  *result = 0;
  Stack stack = STACK_ZERO;

  int err = parser(src, &stack);

  if (!err) err = calculation(result, x, stack);

  clear_stack(&stack);

  return err;
}

int calculation(double* res, double x, Stack stack) {
  int err = OK;
  size_t len = 0;
  for (Node* lek = stack.head; lek != NULL; lek = lek->next) {
    if (is_number(lek) || lek->is_x) {
      ++len;
    }
  }

  double str_numb[len];
  int i = 0;
  for (Node* lek = stack.head; lek != NULL; lek = lek->next) {
    if (is_number(lek)) {
      str_numb[i] = lek->number;
      ++i;
    } else if (lek->is_x) {
      str_numb[i] = x;
      ++i;
    } else {
      if (lek->symbol == PLUS && len >= 2) {
        str_numb[i - 2] = str_numb[i - 2] + str_numb[i - 1];
        --i;
      }

      else if (lek->symbol == MINUS && len >= 2) {
        str_numb[i - 2] = str_numb[i - 2] - str_numb[i - 1];
        --i;
      }

      else if (lek->symbol == UNARY_MINUS && len >= 1) {
        str_numb[i - 1] *= -1;
      }

      else if (lek->symbol == UNARY_PLUS && len >= 1) {
        continue;
      }

      else if (lek->symbol == MULT && len >= 2) {
        str_numb[i - 2] = str_numb[i - 2] * str_numb[i - 1];
        --i;
      }

      else if (lek->symbol == DIV && len >= 2) {
        str_numb[i - 2] = str_numb[i - 2] / str_numb[i - 1];
        --i;
      }

      else if (lek->symbol == POW && len >= 2) {
        str_numb[i - 2] = pow(str_numb[i - 2], str_numb[i - 1]);
        --i;
      }

      else if (lek->symbol == MOD && len >= 2) {
        str_numb[i - 2] = fmod(str_numb[i - 2], str_numb[i - 1]);
        --i;
      }

      else if (lek->symbol == SIN && len >= 1) {
        str_numb[i - 1] = sin(str_numb[i - 1]);
      }

      else if (lek->symbol == COS && len >= 1) {
        str_numb[i - 1] = cos(str_numb[i - 1]);
      }

      else if (lek->symbol == TAN && len >= 1) {
        str_numb[i - 1] = tan(str_numb[i - 1]);
      }

      else if (lek->symbol == SQRT && len >= 1) {
        str_numb[i - 1] = sqrt(str_numb[i - 1]);
      }

      else if (lek->symbol == LN && len >= 1) {
        str_numb[i - 1] = log(str_numb[i - 1]);
      }

      else if (lek->symbol == LOG && len >= 1) {
        str_numb[i - 1] = log10(str_numb[i - 1]);
      }

      else if (lek->symbol == ASIN && len >= 1) {
        str_numb[i - 1] = asin(str_numb[i - 1]);
      }

      else if (lek->symbol == ACOS && len >= 1) {
        str_numb[i - 1] = acos(str_numb[i - 1]);
      }

      else if (lek->symbol == ATAN && len >= 1) {
        str_numb[i - 1] = atan(str_numb[i - 1]);
      }
    }
  }

  if (i != 1) err = ERROR;
  if (!err) *res = str_numb[i - 1];
  return err;
}

bool is_number(Node* node) {
  return node->symbol == SYMBOL_NONE && node->is_x == false;
}

int parser(const char* str, Stack* stack) {
  int err = OK;

  Stack out_stack = STACK_ZERO;
  Stack tmp_stack = STACK_ZERO;

  bool nextNumber = true;
  bool nextUnary = true;
  bool nextOperand = true;

  for (const char* str_p = str; *str_p != '\0' && !err; ++str_p) {
    char symb = *str_p;

    if (symb == ' ') continue;

    if (is_num(symb) && nextNumber) {
      int len = 0;
      double num = 0.0;
      sscanf(str_p, "%lf%n", &num, &len);
      str_p += len - 1;
      nextNumber = false;
      nextUnary = false;
      nextOperand = true;

      err = stack_push(&out_stack, create_node(SYMBOL_NONE, num, false));
    }

    else if (symb == 'x' && nextNumber) {
      err = stack_push(&out_stack, create_node(SYMBOL_NONE, 0.0, true));
      nextNumber = false;
      nextUnary = false;
      nextOperand = true;
    }

    else if (is_operand(symb) && nextOperand) {
      err = add_operand(&out_stack, &tmp_stack, symb, nextUnary);
      nextUnary = true;
      nextNumber = true;
      if (symb == PLUS || symb == MINUS) nextOperand = false;
    }

    else if (is_letter(symb)) {
      err = check_function(&tmp_stack, &str_p);
      if (!err) str_p -= 1;
      nextNumber = false;
      nextUnary = false;
      nextOperand = true;
    }

    else if (symb == '(') {
      err = stack_push(&tmp_stack, create_node(symb, 0.0, false));
      nextNumber = true;
      nextUnary = true;
      nextOperand = true;
    }

    else if (symb == ')') {
      Node* tmp = NULL;
      while ((tmp = stack_pop(&tmp_stack)) != NULL && tmp->symbol != '(') {
        err = stack_push(&out_stack, tmp);
      }

      if (tmp == NULL) {
        err = ERROR;
      } else {
        clear_node(tmp);
      }

      nextNumber = false;
      nextUnary = false;
      nextOperand = true;
    }

    else
      err = ERROR;
  }

  Node* tmp = NULL;

  while (!err && (tmp = stack_pop(&tmp_stack)) != NULL) {
    if (tmp->symbol == '(') err = ERROR;
    stack_push(&out_stack, tmp);
  }

  inverse_stack(&out_stack, &tmp_stack, stack, tmp, err);

  return err;
}

int inverse_stack(Stack* out_stack, Stack* tmp_stack, Stack* stack, Node* tmp,
                  int err) {
  if (err) {
    clear_stack(tmp_stack);
    clear_stack(out_stack);
  } else {
    while ((tmp = stack_pop(out_stack)) != NULL) {
      stack_push(stack, tmp);
    }
  }
  return err;
}

bool is_num(char symbol) { return symbol >= '0' && symbol <= '9'; }

bool is_letter(char letter) { return letter >= 'a' && letter <= 'z'; }

bool is_operand(char operand) {
  bool rez = false;
  switch (operand) {
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
    case POW:
    case MOD:
      rez = true;
      break;
  }
  return rez;
}

int priority(char symbol) {
  int rank = 0;
  switch (symbol) {
    case PLUS:
    case MINUS:
      rank = 1;
      break;
    case MULT:
    case DIV:
    case MOD:
      rank = 2;
      break;
    case UNARY_MINUS:
    case UNARY_PLUS:
      rank = 3;
      break;
    case POW:
      rank = 4;
      break;
    case ASIN:
    case ACOS:
    case ATAN:
    case SIN:
    case COS:
    case TAN:
    case SQRT:
    case LN:
    case LOG:
      rank = 5;
      break;
  }
  return rank;
}

int add_operand(Stack* out_stack, Stack* tmp_stack, char symbol,
                bool nextUnary) {
  if (nextUnary && symbol == PLUS)
    symbol = UNARY_PLUS;
  else if (nextUnary && symbol == MINUS)
    symbol = UNARY_MINUS;

  int rez = OK;
  Node* lek;
  while ((lek = stack_pop(tmp_stack)) != NULL && lek->symbol != '(' &&
         (priority(lek->symbol) > priority(symbol) ||
          (lek->symbol != POW && priority(lek->symbol) == priority(symbol)))) {
    stack_push(out_stack, lek);
  }

  if (lek != NULL) {
    stack_push(tmp_stack, lek);
  }

  rez = stack_push(tmp_stack, create_node(symbol, 0.0, false));

  return rez;
}

int check_function(Stack* tmp_stack, const char** str) {
  int err = OK;
  const char* tmp = *str;
  if (cmp_func(tmp, "sin(")) {
    err = stack_push(tmp_stack, create_node(SIN, 0.0, false));
    tmp += 3;
  }

  else if (cmp_func(tmp, "cos(")) {
    err = stack_push(tmp_stack, create_node(COS, 0.0, false));
    tmp += 3;
  }

  else if (cmp_func(tmp, "tan(")) {
    err = stack_push(tmp_stack, create_node(TAN, 0.0, false));
    tmp += 3;
  }

  else if (cmp_func(tmp, "sqrt(")) {
    err = stack_push(tmp_stack, create_node(SQRT, 0.0, false));
    tmp += 4;
  }

  else if (cmp_func(tmp, "ln(")) {
    err = stack_push(tmp_stack, create_node(LN, 0.0, false));
    tmp += 2;
  }

  else if (cmp_func(tmp, "log(")) {
    err = stack_push(tmp_stack, create_node(LOG, 0.0, false));
    tmp += 3;
  }

  else if (cmp_func(tmp, "asin(")) {
    err = stack_push(tmp_stack, create_node(ASIN, 0.0, false));
    tmp += 4;
  }

  else if (cmp_func(tmp, "acos(")) {
    err = stack_push(tmp_stack, create_node(ACOS, 0.0, false));
    tmp += 4;
  }

  else if (cmp_func(tmp, "atan(")) {
    err = stack_push(tmp_stack, create_node(ATAN, 0.0, false));
    tmp += 4;
  }

  else
    err = ERROR;

  *str = tmp;
  return err;
}

bool cmp_func(const char* func, const char* orig) {
  int len = str_len(orig);
  int res = true;

  for (int i = 0; i < len && res; ++i) {
    if (func[i] != orig[i]) res = false;
  }

  return res;
}

size_t str_len(const char* str) {
  size_t len = 0;
  for (; *str != '\0'; str += 1) len += 1;
  return len;
}
