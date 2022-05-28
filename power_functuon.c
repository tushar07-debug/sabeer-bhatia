// Find x^y using function

float po(int,int);
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	float ans;

	printf("\n Enter The Value of X,Y\n");
	scanf("%d%d",&x,&y);
	ans=po(x,y);
	printf("\n Your Answer is:>>%.2f",ans);
	getch();
}
float po(int a,int b)
{
	float k=1;
	if(b>0)
	{
		while(b>0)
		{
			k=k*a;
			b--;
		   }
	  }
	  return k;
}

