//  Join String Using strcat and strncat Function

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[20]="tushar ";
	char s2[]="kumar singh";
	char s3[40]="";

	printf("s1=%s\ns2=%s\n",s1,s2);
	printf("strcat(s1,s2)=%s\n",strcat(s1,s2));
	printf("strncat(s3,s1,6)=%s\n",strncat(s3,s1,6));
	printf("strcat(s3,s1)=%s\n",strcat(s3,s1));
	getch();
}
