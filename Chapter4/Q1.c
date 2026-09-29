/*Write a program to print multiplication table of a given number 'n'.*/
#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the number whose multiplication table you want.\n");
    scanf("%d", &n);
    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, i*n);
    }
}