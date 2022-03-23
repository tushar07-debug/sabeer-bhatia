/* C PROGRAM TO CALCULATE ELECTRICITY BILL*/
#include<stdio.h>
int main()
{
    int units;
    float amount,surcharge,total_amount;
    printf("\n enter the units consumed : ");
    scanf("%d",&units);
    if (units <50)
    {
        amount =  units*2.60;
        surcharge = 25;
    }
    else if (units <= 100)
    {
        amount = 130 + ((units - 50 )*3.25);
        surcharge = 35;
    }
    else if (units<= 200)
    {
        amount = 130 + 162.5 +((units - 100 )*5.26);
        surcharge = 45;
    }
    else
    {
        amount = 130 + 162.50 +526 +((units - 200)*7.75);
        surcharge = 55;
    }
    total_amount = amount + surcharge ;
    printf("\n electricity bill = %.2f",total_amount);
    return 0;
    }

