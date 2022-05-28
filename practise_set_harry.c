#include<stdio.h >
#include<conio.h>

void cube(int*);

int main()
{
    int a=2;
    cube(&a);
    printf("\n a=%d",a);
    return 0;
}
void cube(int *a1)
{
   *a1=(*a1)*(*a1)*(*a1);
   printf("\n *a1=%d",*a1);
}
