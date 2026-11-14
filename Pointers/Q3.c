/*Write a program to change the value of a variable to ten times its current value.*/
#include <stdio.h>
int main()
{
    int a = 10;
    int* ptra = &a;
    printf("Old value is %d\n", *ptra);
    *ptra = 10*a;
    printf("New value is %d\n", *ptra);
    return 0;
}