/* Write a program to calculate the sum of the numbers occurring in the multiplication
table of 8 (consider 8 × 1 to 8 × 10).*/
#include <stdio.h>
int main()
{
    int sum = 0;
    int n;
    for (int i = 1; i <= 10; i++)
    {
        n = 8 * i;
        sum = sum + n;
        i = i++;
    }
    printf("%d", sum);
    return 0;
}