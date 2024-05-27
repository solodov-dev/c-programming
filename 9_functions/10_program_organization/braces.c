#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void push(int i);
int pop(void);
bool is_empty(void);

int main(void) {
  char in;

  printf("Enter parentheses and/or braces: ");

  while ((in = getchar()) != '\n') {
    if (in == '(' || in == '{') {
      push(in);
    } else {
      int last = pop();
      if ((in == ')' && last != '(') || (in == '}' && last != '{')) {
        printf("Braces do not match\n");
        return 0;
      }
    }
  };

  if (is_empty())
    printf("Parentheses/braces are nested properly\n");
  else
    printf("Braces do not match\n");
}

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void stack_overflow() {
  printf("Stack overflow\n");
  exit(EXIT_FAILURE);
}

int stack_underflow() {
  printf("Braces do not match\n");
  exit(EXIT_FAILURE);
}

void push(int i) {
  if (is_full())
    stack_overflow();
  else
    contents[top++] = i;
}

int pop(void) {
  if (is_empty()) {
    stack_underflow();
    return -1;
  } else
    return contents[--top];
}
