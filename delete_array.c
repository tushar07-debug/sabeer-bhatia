// Delete an Element from Array

#include<stdio.h>
#include<conio.h>
void main()
{
	int m[10],del,i,j,n;

	printf("How many elements ?");
	scanf("%d",&n);
	printf("\nEnter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	printf("\nEnter number for delete:");
	scanf("%d",&del);
	for(i=0;i<n;i++)
	{
		if(m[i]==del)break;
	}
	for(j=i;j<n;j++)
	{
		m[j]=m[j+1];
	}
	n--;
	printf("\nAfter deletion\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",m[i]);
	}
	getch();
}
