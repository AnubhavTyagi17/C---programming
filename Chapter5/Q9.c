/*Write a recusive function power(int base, int exp) to find 'base' raised to 'exp'.*/
#include <stdio.h>
int power(int base, int exp)
{
    if (base == 1)
    {
        return base;
    }
    else if (exp == 0)
    {
        return 1;
    }
    else
    {
        exp = exp - 1;
        return base = base * power(base, exp);
    }
}
int main()
{
    int Base, Exponent = 0;
    printf("Enter the value of Base:\n");
    scanf("%d", &Base);
    printf("Enter the value of Exponent:\n");
    scanf("%d", &Exponent);
    printf("%d\n", power(Base, Exponent));
    return 0;
}