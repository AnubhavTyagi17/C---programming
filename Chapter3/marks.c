/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user*/
#include <stdio.h>
int main()
{
    int Physics;
    int Chemistry;
    int Maths;
    printf("Enter your Physics marks\n");
    scanf("%d", &Physics);
    printf("Enter your Chemistry marks\n");
    scanf("%d", &Chemistry);
    printf("Enter your Maths marks\n");
    scanf("%d", &Maths);
    if ((Physics + Chemistry + Maths) / 3 >= 40)
    {
        printf("You are passed overall\n");

        if (Physics >= 33 && Chemistry >= 33 && Maths >= 33)
        {
            printf("Also you are passed in all three subjects");
        }
        if (Physics >= 33 && Chemistry >= 33 && Maths < 33)
        {
            printf("But you are failed in Maths.");
        }
        if (Physics >= 33 && Chemistry < 33 && Maths >= 33)
        {
            printf("But you are failed in Chemistry.");
        }
        if (Physics < 33 && Chemistry >= 33 && Maths >= 33)
        {
            printf("But you are failed in Physics");
        }
        if (Physics < 33 && Chemistry < 33 && Maths >= 33)
        {
            printf("But you are failed in Physics and Chemistry");
        }
        if (Physics < 33 && Chemistry >= 33 && Maths < 33)
        {
            printf("But you are failed in Physics and Maths");
        }
        if (Physics >= 33 && Chemistry < 33 && Maths < 33)
        {
            printf("But you are failed in Chemistry and Maths");
        }
        
    }
    else
        {
            printf("You are failed overall");
        }
}