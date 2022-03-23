/*c program to calculate salary*/
#include<stdio.h>
int main ()
{
    float basic ,HRA, DA , gross_salary;
    printf("\n enter salary of an employee:");
    scanf("%f",&basic);
    if(basic <= 10000)
    {
        HRA = (basic*8)/100;
        DA = (basic*10)/100;
    }
    else if (basic <= 20000)
    {
        HRA = (basic*16)/100;
        DA = (basic*20)/100;
    }
    else
    {
        HRA = (basic*24)/100;
        DA = (basic*30)/100;
    }
    gross_salary = basic +HRA +DA;
    printf("\n gross_salary of an employee = %.2f",gross_salary);
    return 0;
}
