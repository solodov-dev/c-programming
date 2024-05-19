#include <stdio.h>

int main(void) {
  int item, month, day, year;
  float price;
  printf("Enter item number: ");
  scanf("%d", &item);
  printf("Enter unit price: ");
  scanf("%f", &price);
  printf("Enter purchase date (mm/dd/yyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("Item\tUnit\tPurchase\n");
  printf("\tPrice\tDate\n");
  printf("%d\t$%5.2f\t%d/%d/%d\n", item, price, month, day, year);
}
