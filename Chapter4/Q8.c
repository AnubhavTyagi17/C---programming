/*Write a program to calculate the factorial of a given number using a for loop.*/
#include <stdio.h>
int main()
{
    int i,n, f;
   printf("Enter the number for which factorial is to be calculated.\n");
   scanf("%d", &n);
   for (i = n, f=1 ; i >= 1; i--)
   {
    f = f*i; 
   }
    printf("%d", f);
    return 0;
}