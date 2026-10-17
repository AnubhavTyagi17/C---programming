/*Write a function to calculate force of attraction on a body of mass 'm'
exerted by earth. Take 'g' = 9.8m/s².*/
#include <stdio.h>
float force(float m)
{
    float g = 9.8;
    return m*g;
}
int main(void)
{
    float a, b;
    printf("Enter the mass of the body in KG:\n");
    scanf("%f", &a);
    b = force(a);
    printf("%.2f", b);
    return 0;
}
