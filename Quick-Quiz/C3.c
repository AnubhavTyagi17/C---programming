/*Write a program to find grade of a student given his marks based on below
Marks Range
90 – 100 ⇒ A
80 – 90 ⇒ B
70 – 80 ⇒ C
60 – 70 ⇒ D
50 – 60 ⇒ E
<50     ⇒F*/
#include <stdio.h>
float main()
{
    float Marks;
    printf("Enter your marks.\n");
    scanf("%f", &Marks);
    if(Marks > 90 && Marks <=100)
    {
        printf("'A' Grade");
    }
    else if(Marks > 80 && Marks <=90)
{
    printf("'B' Grade");
}
 else if(Marks > 70 && Marks <=80)
{
    printf("'C' Grade");
}
 else if(Marks > 60 && Marks <=70)
{
    printf("'D' Grade");
}
 else if(Marks > 50 && Marks <=60)
{
    printf("'E' Grade");
}
 else if(Marks <=50 && Marks >= 0)
{
    printf("'F' Grade");
}
else if(Marks > 100 || Marks < 0)
{
    printf("Enter valid Marks");
}
return 0;
}