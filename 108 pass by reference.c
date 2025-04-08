#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int num1, num2;

  printf("Enter the first number: ");
  scanf("%d", &num1);

  printf("Enter the second number: ");
  scanf("%d", &num2);

  printf("Before swapping:\n");
  printf("Number 1: %d\n", num1);
  printf("Number 2: %d\n", num2);

  // Call the swap function, passing the addresses of num1 and num2
  swap(&num1, &num2);

  printf("After swapping:\n");
  printf("Number 1: %d\n", num1);
  printf("Number 2: %d\n", num2);

  return 0;
}
