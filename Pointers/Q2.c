/* Write a program having a variable i. Print the address of i.
Pass this variable to function and print its address.*/
#include <stdio.h>
void prtadd(int a)
{
   int* ptra = &a; 
    printf("%p\n", ptra);
}
int main()
{
    int i;
    int* ptri = &i;
    printf("%p\n", ptri);
    prtadd(i);
    return 0;
}
