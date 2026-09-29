/*Write a program to calculate simple interest for a set of values representing principal,
number of years, and rate of interest.*/
#include <stdio.h>
int main()
{
    float P, R, T;
    scanf("%f%f%f", &P, &R, &T);
    printf("Simple Interest = %f",(P*R*T)/100);
    return 0;
}