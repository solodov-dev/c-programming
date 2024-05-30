#include <stdio.h>

#define N 100

int main(void) {
  char ch;
  int a[N], *p = a;

  printf("Enter a message: ");

  while ((ch = getchar()) != '\n') {
    *p++ = ch;
  }

  while (p >= a) {
    printf("%c", *p--);
  }

  printf("\n");
}
