#include <stdio.h>

int main()
{
    int i, n, d = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    if (n <= 1)
        d = 1;                      // not prime
    else if (n % 2 == 0 && n != 2)
        d = 1;                      // even numbers except 2 are not prime
    else
    {
        for (i = 3; i * i <= n; i += 2)   // odd divisors only, up to √n
        {
            if (n % i == 0)
            {
                d = 1;
                break;
            }
        }
    }

    if (d == 0)
        printf("The entered number is a prime number.\n");
    else
        printf("The entered number is not a prime number.\n");

    return 0;
}