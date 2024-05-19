#include <stdio.h>

int main(void) {
  int code, part_one, part_two;
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d)%d-%d", &code, &part_one, &part_two);
  printf("You entered %d.%d.%d\n", code, part_one, part_two);
  return 0;
}
