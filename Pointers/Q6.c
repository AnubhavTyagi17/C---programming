/*Write a program to print the value of a variable i by using a pointer to pointer type variable.*/
#include <stdio.h>
int main()
{
    int i = 5;
    int* p = &i;
    int** j = &p;
    printf("%d", **j);
    return 0;
}