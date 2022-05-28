// Check given number is palindrom or not using function

#include<stdio.h>
#include<conio.h>
void main()
{
	int ispalindrome(int);
	int n;

	printf("Enter Number:");
	scanf("%d",&n);
	if(ispalindrome(n)==1)
	{
		printf("%d is palindrome",n);
	}
	else
	{
		printf("%d is not palindrome",n);
	}
	getch();
}
int ispalindrome(int m)
{
	int rev=0,temp;
	temp=m;
	while(m>0)
	{
		rev=rev*10+m%10;
		m=m/10;
	}
	if(temp==rev)return 1;
	else return 0;
}

