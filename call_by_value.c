// Call by value Example

#include <stdio.h>
#include <conio.h>

void cube( int );

int  main()
{
	int a = 2;

	cube( a );

	printf( "\n a = %d", a );

	getch();
	return 0;
}

void cube( int  x )
{
	x = x * x * x;
	printf( "\n x = %d", x );
}
