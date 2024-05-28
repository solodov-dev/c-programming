/* Write a program that asks the user to enter a fraction, then reduces the
fraction to lowest terms: Enter a fraction: 6/12 In lowest terms: 1/2 Hint: To
reduce a fraction to lowest terms, first compute the GCD of the numerator and
denominator. Then divide both the numerator and denominator by the GCD.*/

#include <stdio.h>

void reduce(int numerator, int denumerator, int *reduced_numerator,
            int *reduced_denumerator);

int main(void) {
  int numerator, denumerator, reduced_numerator, reduced_denumerator;

  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denumerator);

  reduce(numerator, denumerator, &reduced_numerator, &reduced_denumerator);
  printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denumerator);
}

int gcd(int m, int n) {
  if (n == 0)
    return m;

  return gcd(n, m % n);
}

void reduce(int numerator, int denumerator, int *reduced_numerator,
            int *reduced_denumerator) {
  int d = gcd(numerator, denumerator);
  *reduced_numerator = numerator / d;
  *reduced_denumerator = denumerator / d;
}
