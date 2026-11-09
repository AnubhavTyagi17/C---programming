/*Write a recursive function to find the sum of the digits of a number.*/
#include <stdio.h>
int sum(int number)
{
    int digit, add;
    if (number <= 9 && number >= 0)
    {
        return number;
    }
    else
    {
        digit = number % 10;
        number = number / 10;
        add = digit + sum(digit);
    }
}
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("%d\n", sum(a));
    return 0;
}