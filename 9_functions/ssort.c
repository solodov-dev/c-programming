#include <stdio.h>

#define N 10

void select_sort(int a[], int n);

int main(void) {
  printf("Please enter %d numbers to sort: ", N);

  int a[N], i;

  for (i = 0; i < N; i++)
    scanf("%d", &a[i]);

  select_sort(a, N);

  printf("The sorted array: ");
  for (i = 0; i < N; i++)
    printf("%d ", a[i]);
  printf("\n");
}

void select_sort(int a[], int n) {
  int max, temp, i;
  max = 0;

  if (n == 1)
    return;

  for (i = 1; i < n; i++)
    if (a[i] >= a[max])
      max = i;

  temp = a[n - 1];
  a[n - 1] = a[max];
  a[max] = temp;

  select_sort(a, n - 1);
}
