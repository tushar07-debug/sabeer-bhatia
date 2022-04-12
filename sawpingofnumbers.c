#include<stdio.h>
int main()
{
 double first,second,temp;
 printf("enter the first number:");
 scanf("%lf",&first);
 printf("enter second number:");
 scanf("%lf",&second);

 //value of first is assigned to temp
 temp = first;

 //value of second is assigned to first
 first = second;

 //value of temp is assigned to initial value of first is assigned to second
 second = temp;

 //%.2lf displays number up to 2 decimal points
 printf("\n after swapping first number = %.2lf\n",first);
 printf("after swapping second number = %.2lf",second);
 return 0;
}
