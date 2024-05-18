#include <stdio.h>

int main(void) {
  int r;

#define PI 3.14f
#define FRACTION (4.0f / 3.0f)

  printf("Enter the value of the radius: ");
  scanf("%d", &r);
  printf("The volume of the sphere is %.2f\n", FRACTION * PI * r * r * r);
}
