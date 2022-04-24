#include<stdio.h>
#include<string.h>
struct bank{
char name [50];
int id;
};
int main(){
struct bank employee;
strcpy( employee.name,"Tushar");
employee.id=2467783;
printf("name is :%s\n",employee.name);
printf("id is:%d\n",employee.id);
return 0;
}



