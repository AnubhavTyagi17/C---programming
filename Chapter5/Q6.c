/*Write a program using function to print the following pattern (first n lines):*/
#include <stdio.h>
void star(int n)
{
    for ( int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2*i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
int main()
{
    int x;
    printf("Enter the value of 'n':\n");
    scanf("%d", &x);
    star(x);
    return 0;
}