#include <stdio.h>

int main(void) {
  int factorial = 1;
  int num;

  printf("Enter the number: ");
  scanf("%d", &num);

  do {
    factorial *= num;
    num--;
  } while (num > 0);

  printf("The factorial is: %d\n", factorial);
}
