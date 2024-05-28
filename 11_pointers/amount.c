#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
  int dollars, twenties, tens, fives, ones;

  printf("Enter the amount to pay: ");
  scanf("%d", &dollars);
  pay_amount(dollars, &twenties, &tens, &fives, &ones);

  printf("Bills: \nTwenties: %d\nTens: %d\nFives: %d\nOnes: %d\n", twenties,
         tens, fives, ones);
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
  *twenties = dollars / 20;
  *tens = (dollars % 20) / 10;
  *fives = (dollars % 20 % 10) / 5;
  *ones = dollars % 5;
}
