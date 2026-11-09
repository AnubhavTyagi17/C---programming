/*Write a function isPrime(int n) that returns 1 if n is prime, otherwise 0.
In main, use it to print all prime numbers from 1 to 100.*/
#include <stdio.h>
int isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int x;
    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}