/*Write a program to calculate the factorial of a given number using a while loop.*/
#include <stdio.h>
int main()
{
    int i,n,f;
    printf("Enter the number for which factorial is to be calculated.\n");
    scanf("%d", &n);
    i = n, f = 1;
    while (i >= 1)
    {
        f = f*i;
       i = --i;
    }
   printf("%d", f);
    return 0;
}