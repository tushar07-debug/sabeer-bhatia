#include<stdio.h>
void main()
{
    int days;
    float fine;
    printf("Enter the numbers of late days : ");
    scanf("%d",&days);
    if(days<=30)
    {
        if(days <= 30 &&days>10)
            fine = 100+((days - 10)*5);
        else if(days<= 10 &&days >5)
                fine = (50 +(days - 5)*1);
                    else if(days<6&&days>0)
                    fine = (days*10);
                    printf("fine = %.2f\n\n",fine);
    }
    else printf("yours membership is cancelled\n\n");
}
