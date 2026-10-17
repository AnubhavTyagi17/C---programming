/*Write a function to convert Celsius temperature into Fahrenheit.*/
#include <stdio.h>
float fahrenheit(float c)
{
    return (c*9/5) + 32;
}
int main()
{
    float a,b;
    printf("Enter the temperature in celsius.\n");
    scanf("%f", &a);
    b = fahrenheit(a);
    printf("%.2f\n", b);
    return 0;
}