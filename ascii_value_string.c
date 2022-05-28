// Show ASCII value of given String's Character

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i;
	char name[20];

	printf("Enter A string :>>");
	gets(name);
	for(i=0;i<strlen(name);i++)
	{
		printf("%c\t%d\n",name[i],name[i]);
	}
	getch();
}
