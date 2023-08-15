#include <stdio.h>

int main() {
  int n;
  printf("Enter a non-negative integer: ");
  scanf("%d", &n);

  // Handle the special case of 0 and 1
  if (n == 1 || n == 0)
    {
      printf("the factorial of %d is 1", n);
    }


  // Calculate the factorial using a loop
  int factorial = 1;
  int i = 1;
  while (i <= n)
    {
      factorial *=i;
      i++;
    }
  printf("Factorial of %d is %d\n", n, factorial/* calculate factorial here */);

  return 0;
}
