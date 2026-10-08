/*Calculate the area of a circle and modify the same program to calculate the volume of
a cylinder given its radius and height*/
#include <stdio.h>
int main()
{
    float pi = 3.14, r, h,R;
    printf("Radius???\n");
    scanf("%f",&r);
    printf("Area = %.2f\n", pi*r*r);
    /*now for the volume of the cylinder*/
    printf("Radius of cylinder??\n");
    scanf("%f",&R);
    printf("Height of the cylinder??\n");
    scanf("%f",&h);
    printf("Volume of the cylinder = %f",2*pi*R*h);
    return 0;
}