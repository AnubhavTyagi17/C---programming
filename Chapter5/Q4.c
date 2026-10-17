/*Write a program using recursion to calculate 'n'th element of Fibonacci series:*/
#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main(void)
{
    int a;
    printf("Enter the value of term for which you want the value of fibonacci series:\n");
    scanf("%d", &a);
    printf("%d\n", fibonacci(a));
    return 0;
}