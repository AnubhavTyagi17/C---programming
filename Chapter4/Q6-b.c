/* Write a program to sum first ten natural numbers using do-while loop.*/
#include <stdio.h>
int main()
{
    int i = 1;
    int sum = 0;
    do{
        sum = sum + i;
        i = i + 1;
    }while(i<=10);
    printf("%d", sum);
}