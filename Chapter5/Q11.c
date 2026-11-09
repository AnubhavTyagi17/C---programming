/*Write a program using functions to print pyramid pattern for n rows. Use one function to print spaces
and another to print stars.*/
#include <stdio.h>
int stars(int a)
{
    for (int i = 1; i <= 2 * a - 1; i++)
    {
        printf("*");
    }
}
int space(int b)
{
    for (int i = 1; i <= b; i++)
    {
        printf(" ");
    }
}
int main()
{
    int lines;
    printf("Enter the value of 'n':\n");
    scanf("%d", &lines);
    for (int i = 1; i <= lines; i++)
    {
        space(lines - i);
        stars(i);
        printf("\n");
    }

    return 0;
}