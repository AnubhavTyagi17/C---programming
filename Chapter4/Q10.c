/*Write a program to check whether a given number is prime or not using loops.*/
#include <stdio.h>
int main()
{
    int i, n, d = 0;   /*Here 'd' stands for the total number of divisor.*/
    printf("Enter the value of n\n");
    scanf("%d", &n);
    if (n<=1)
    {
        printf("The entered value is not a prime number\n");
    }
    else if (n == 2)
    {
        printf("The entered number is a prime number");
    }
    
    else
    {
        for ( i = 2; i <= n-1; i++)
        {
            if (n % i == 0)
            {
                d = 1;
                break;
            }
            
        }
        if (d == 0)
        {
            printf("The entered number is a prime number.\n");
        }
        else
        {
            printf("The entered number is not a prime number.\n");
        }  
    }
    return 0;
}