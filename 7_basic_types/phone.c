#include <stdio.h>

int main(void) {
  char ch;

  printf("Enter the phone number: ");

  while ((ch = getchar()) != '\n') {
    if (ch >= 'A' && ch <= 'Z') {
      printf("%d", (ch - 'A') / 3 + 2);
    } else {
      putchar(ch);
    }
  }

  putchar('\n');
}
