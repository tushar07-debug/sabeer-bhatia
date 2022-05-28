// Arithmatic operation on Pointer

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,*p1,*p2,x,y,z;

	a=10,b=20;
	p1=&a;
	p2=&b;
	x=*p1**p2-6;
	y=4*-*p2;
	printf("a=%d\t b=%d\t x=%d\t y=%d\n",a,b,x,y);
	*p1=*p1+20;
	*p2=*p2-10;
	z=*p1**p2-6;
	printf("a=%d=\tb=%d\tz=%d\n",a,b,z);
	getch();
}
