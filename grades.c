#include<stdio.h>
int main()
{
int english, chemistry, computer, physics , maths;
float total ,percentage ;

printf("enter the marks of five subjects : \n");
scanf("%d%d%d%d%d", &english,&chemistry,&computer, &physics , &maths);

total = english + chemistry + computer + physics + maths;
percentage = (total/500)*100;

printf(" total marks = %.2f\n",total);
printf("marks percentage = %.2f", percentage);

if(percentage >=90){
    printf("\n grade a");
}
else if (percentage >=80){
    printf("\n grade b");
}
else if (percentage>= 70){
    printf("\n grade c");
}
else if (percentage>= 60){
    printf("\n grade d");
}
else{
    printf("\n fail");
}
return 0;
}
