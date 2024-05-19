#include <stdio.h>

int main(void) {
  int n;
  int x = 2;

  printf("Enter the number: ");
  scanf("%d", &n);

  while (x * x < n) {
    if ((x * x) % 2 == 0)
      printf("%d\n", x * x);
    x++;
  }
}
