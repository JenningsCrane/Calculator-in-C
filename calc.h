#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node_t {
  char symbol;
  double number;
  bool is_x;
  struct node_t* next;
} Node;

typedef struct {
  Node* head;
} Stack;

#define OK 0
#define ERROR 1

#define PLUS '+'
#define MINUS '-'
#define MULT '*'
#define DIV '/'
#define MOD '%'
#define POW '^'

#define SIN 's'
#define COS 'c'
#define TAN 't'
#define SQRT 'q'
#define LN 'l'
#define LOG 'g'
#define ASIN '1'
#define ACOS '2'
#define ATAN '3'

#define LEN_MASS 10000
#define MIN_X (-3.14159265358979323846 / 2) * 10
#define MAX_X (3.14159265358979323846 / 2) * 10

#define UNARY_MINUS '~'
#define UNARY_PLUS '#'

#define SYMBOL_NONE '\0'

#define STACK_ZERO \
  (Stack) { NULL }

Node* create_node(char symbol, double number, bool x);
int stack_push(Stack* stack, Node* node);
Node* stack_pop(Stack* stack);
void clear_node(Node* node);
void clear_stack(Stack* stack);
bool is_number(Node* node);
bool is_symbol(Node* node);
int parser(const char* str, Stack* stack);
bool is_num(char symbol);
bool is_letter(char letter);
bool is_operand(char operand);
int priority(char symbol);
int add_operand(Stack* out_stack, Stack* tmp_stack, char symbol,
                bool nextUnary);
int inverse_stack(Stack* out_stack, Stack* tmp_stack, Stack* stack, Node* tmp,
                  int err);
bool cmp_func(const char* func, const char* orig);
size_t str_len(const char* str);
int calculation(double* res, double x, Stack stack);
int check_function(Stack* tmp_stack, const char** str);
int compute_line(const char* src, double* result, double x);
int compute_graph(const char* str, double* x, double* y, size_t len);
