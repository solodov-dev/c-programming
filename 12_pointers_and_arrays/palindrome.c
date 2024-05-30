#include <ctype.h>
#include <stdio.h>

#define N 100

int main(void) {
  int a[N], *start = a, *end = a;
  char ch;

  printf("Enter a message: ");

  while (1) {
    ch = getchar();
    if (ch == '\n') {
      end--;
      break;
    } else if (isalpha(ch)) {
      *end++ = tolower(ch);
    }
  }

  while (start < end) {
    if (*start++ != *end--) {
      printf("Not a palindrome\n");
      return 0;
    }
  }

  printf("Palindrome\n");
}
