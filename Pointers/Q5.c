/*Write a program using a function which calculates the sum and average of two numbers.
Use pointers and print the values of sum and average in main().*/
#include <stdio.h>
void fn(float a, float b, float* ptra, float* ptrb)
{
    *ptra = a + b;
    *ptrb = (a + b)/2;
}
int main()
{
    float x, y, sum, average;
    printf("Enter two numbers:\n");
    scanf("%f %f", &x, &y);
    fn(x, y, &sum, &average);
    printf("%.2f\n", sum);
    printf("%.2f\n", average);
    return 0;
}