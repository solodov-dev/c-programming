#include <stdio.h>

int main(void) {
  int prefix, group, pub_code, item_num, check_digit;
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &prefix, &group, &pub_code, &item_num, &check_digit);
  printf("GS1 prefix: %d\n", prefix);
  printf("Group identifier: %d\n", group);
  printf("Publisher code: %d\n", pub_code);
  printf("Item number: %d\n", item_num);
  printf("Check digit: %d\n", check_digit);
}
