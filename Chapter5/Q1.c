/*Write a program using function to find average of three numbers.*/
#include <stdio.h>
float average(float a, float b, float c)
{
    return (a + b + c)/3;
}
int main()
{
    float a, b, c, d;
    printf("Enter three numbers\n");
    scanf("%f %f %f", &a, &b, &c);
    d = average(a, b, c);
    printf("%f", d);
    return 0;
}