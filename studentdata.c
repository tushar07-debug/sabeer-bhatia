#include <stdio.h>
#include<string.h>
struct StudentData{
char name[50];
int Roll_No;
};
int main(){
struct StudentData student;
strcpy(student.name,"Tushar");
student.Roll_No=2467783;
printf("Student name is :%s\n",student.name);
printf("Roll_No is:%d\n",student.Roll_No);
return 0;
}
