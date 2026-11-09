/*Write a code using function to print diamond shape.*/
#include <stdio.h>
void diamond(int n)
{
    for (int i = 1; i < 2 * n; i++)
    {
        printf("*");
    }
}
void space(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf(" ");
    }
}
int main()
{
    int N;
    printf("Enter the value of 'n':\n");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        space(N - i);
        diamond(i);
        printf("\n");
    }
    for (int i = N + 1; i < 2 * N; i++)
    {
        space(i - N);
        diamond(10 - i);
        printf("\n");
    }

    return 0;
}