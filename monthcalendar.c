#include<stdio.h>
int main()
{
    int i, numbersofdays;
    int first;
    printf("enter the total no of days in a month:");
    scanf("%d",&numbersofdays);
    printf("enter the first day from which months is starting:");
    scanf("%d",&first);
    for(i=1; i<first; i++);
    printf(" ");
    for(i = 1 ; i<numbersofdays; i++){
    printf("%3d",i);
    if((first+i-1)%7==0)
        printf("\n");
}
    return 0;
}
