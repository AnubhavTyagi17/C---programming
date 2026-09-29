/*Write a program to find whether a year entered by the user is a leap year or not. Take
year as an input from the user*/
#include <stdio.h>
int main()
{
    int Year;
    printf("Enter the year for which you want to check whether it is a leap year or not.\n");
    scanf("%d", &Year);
    if ((Year % 4) == 0)
    {
        if ((Year % 100) != 0)
        {
            printf("The entered year is a leap year");
        }
        else if (Year % 400 == 0)
        {
            printf("The entered year is a leap year");
        }
        else
        {
            printf("The entered year is not a leap year");
        }
    }

    else
    {
        printf("The entered year is not a leap year");
    }
    return 0;
}