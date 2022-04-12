#include<stdio.h>
int main()
{
int marks1,marks2;
printf("enter the two  marks :");
scanf("%d,%d",&marks1,&marks2);
if( marks1== marks2){
    printf("result : %d=%d",marks1,marks2);
}
else if (marks1<marks2){
    printf("result: %d<%d",marks1,marks2);
}
else{
    printf("result: %d>%d",marks1,marks2);
}
return 0;
}
