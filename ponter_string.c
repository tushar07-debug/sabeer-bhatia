//compare string using pointer/

#include<stdio.h>
void main()
{
	char str1[20],str2[20],*p1,*p2;
	int i,flag=0;
	printf("Enter first string: ");
	scanf("%s",&str1);
	printf("Enter second string: ");
	scanf("%s",&str2);
	p1=&str1;
	p2=&str2;
	while(*p1!='\0' || *p2!='\0')
	{
		if(*p1==*p2)
		{
			++p1;
			++p2;
		}
		else
		{
			flag=1;
			break;
		}
	}

	if(*p1=='\0' && *p2=='\0' && flag==0)//first two conditions in if are for
	                                                                    //matching the length of the strings
          printf("String are same");
        else
      	  printf("String are not same");

}
