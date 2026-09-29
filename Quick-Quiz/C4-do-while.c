/* Write a program to print first 'n' natural number using do-while loop.*/
#include <stdio.h>
int main()
{
    int n;
    int i = 1;
    printf("Enter the value of n.\n");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i = i+1;
    } while (i <= n);
    return 0;
}