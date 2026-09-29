/*Write a program to convert Celsius (Centigrade) temperature to Fahrenheit*/
#include <stdio.h>
int main()
{
    float C;
    printf("Give the value of temperature in celsius you want to convert into fahrenheit\n");
    scanf("%f" , &C);
    printf("Temperature in Fahrenheit is = %f", (9*C)/5+32);
    return 0;
}