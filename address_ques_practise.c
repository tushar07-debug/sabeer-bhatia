//C Program to to print the address of a variable and value of variable *\

#include<stdio.h>
int  main( )
{
int  a ;
int  *p ;
printf(" Enter any integer: ") ;
scanf("%d ",& a) ;
p = &a ;
printf("\n Value of Integer : %d ",a) ;
printf("\n Value of Integer : %d ",*p) ;
printf("\n Value of Integer : %d ",*(&a)) ;
printf("\n Address of Integer : %u ",p) ;
printf("\n Address of Integer : %u ",&a) ;
return 0;
}
