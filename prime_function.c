//  Find number is prime or not using function

int pr(int)
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s;

	printf("\n\n\t\t Enter The Value of N:>>");
	scanf("%d",&n);
	if(pri(n)==1)
	{
		printf("\n\t\t\t%d is Prime",n);}
	}
	else
	{
		printf("\n\t\t\t%d is Not Prime",n);
	}
	getch();
}
int pr(int m)
{
	int i;
	for(i=1;i<=m-1;i++)
	{
		if(m%i==0)
		{
			return 1;
		}
			return 2;
	  }
}

