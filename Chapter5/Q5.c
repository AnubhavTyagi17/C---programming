/* Write a recursive function to calculate the sum of first 'n' natural numbers.*/
#include <stdio.h>
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n-1);
    }
}
int main(void)
{
    int a;
    printf("Enter value upto which you want the sum of natural numbers:\n");
    scanf("%d", &a);
    printf("%d\n", sum(a));
    return 0;
}