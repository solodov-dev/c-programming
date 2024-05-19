#include <stdio.h>

int main(void) {
  float max = 0, input;

  for (;;) {
    printf("Enter a number: ");
    scanf("%f", &input);
    if (input == 0)
      break;
    if (input > max)
      max = input;
  }

  printf("The biggest number is %.2f\n", max);
}
