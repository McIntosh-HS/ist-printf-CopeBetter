#include <stdio.h>

int main() {
  float subtotal;
  float tax;
  printf("Enter your grocery total: ");
  scanf("%f", &subtotal);
  printf("Enter your tax rate: ");
  scanf("%f", &tax);
  printf("The final total is: %.2f\n", subtotal + subtotal*tax);
  return 0;
}
