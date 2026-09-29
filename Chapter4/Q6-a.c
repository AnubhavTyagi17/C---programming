/*Write a program to sum first ten natural numbers using for loop.*/
#include <stdio.h>
int main()
{
    int i, sum;
    for(i=1, sum=0; i<=10; i++){
        sum = sum + i;
        i = i++;
    }
    printf("%d", sum);
}