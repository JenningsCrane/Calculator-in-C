#include "calc.h"

Node* create_node(char symbol, double number, bool x) {
  Node* list = malloc(sizeof(Node));
  if (list != NULL) {
    list->symbol = symbol;
    list->number = number;
    list->is_x = x;
    list->next = NULL;
  }

  return list;
}

int stack_push(Stack* stack, Node* node) {
  if (node != NULL) {
    Node* tmp = stack->head;
    stack->head = node;
    node->next = tmp;
  }
  return node == NULL;
}

Node* stack_pop(Stack* stack) {
  Node* list = stack->head;
  if (stack->head != NULL) {
    stack->head = stack->head->next;
  }
  return list;
}

void clear_node(Node* node) {
  if (node != NULL) {
    free(node);
  }
}
void clear_stack(Stack* stack) {
  if (stack != NULL) {
    Node* tmp = NULL;
    while (stack->head != NULL) {
      tmp = stack->head->next;
      free(stack->head);
      stack->head = tmp;
    }
  }
}
