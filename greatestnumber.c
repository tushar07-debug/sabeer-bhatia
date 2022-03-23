#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("\n enter value of num1,num2 , num3:");
    scanf("%d%d%d",&num1, &num2, &num3);
    if((num1>num2)&&(num1>num3))
        printf("\n num1 is greatest");
    else if ((num2>num3)&&(num2>num1))
        printf("\n num2 is greatest");
    else
        printf("\n num3 is greatest");
    return 0;
}
