/*Write a recursive function to reverse a number.
Example: 1234 gives 4321*/
#include <stdio.h>
int reverse(int num, int rev)
{
  int digit;
  if (num == 0)
  {
    return rev;
  }
  else
  {
    digit = num % 10;
    rev = rev * 10 + digit;
    num = num / 10;
    return reverse(num, rev);
  }
}
int main()
{
  int number, rev = 0;
  printf("Enter a number:\n");
  scanf("%d", &number);
  printf("%d\n", reverse(number, rev));
  return 0;
}