/* Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab Tax
2.5 - 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user*/
#include <stdio.h>
int main()
{
    int Annual_income;
    int Income_tax;
    int Tax_Slab;
    printf("Enter your Annual Income In Rupees.\n");
    scanf("%d", &Annual_income);
    if (Annual_income < 250000)
    {
        printf("BSDK Bhikhari, You don't need to pay Income Tax\n");
        printf("Income Tax is %d", 0);
    }
    else if (Annual_income >= 250000 && Annual_income <= 500000)
    {
        printf("Tax Slab is 5 percent\n");
        printf("Income Tax is %d", (Annual_income * 5) / 100);
    }
    else if (Annual_income > 500000 && Annual_income <= 1000000)
    {
        printf("Tax Slab is 20 percent\n");
        printf("Income Tax is %d", (Annual_income * 20) / 100);
    }
    else
    {
        printf("Tax Slab is 30 percent\n");
        printf("Income Tax is %d", (Annual_income * 30) / 100);
    }
}