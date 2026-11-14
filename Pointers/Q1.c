/*Write a program to print the address of a variable. Use this address to get the value of
the variable*/
#include <stdio.h>
int main()
{
    int a = 5;
    int* ptra = &a;
    printf("Adress of a is %p\n", ptra);
    printf("The value of a is %d\n", *ptra);
    return 0;
}