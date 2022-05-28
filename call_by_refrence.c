
#include <stdio.h>
#include <conio.h>

void cube( int* );

int  main()
{
	int a = 10;


	cube( &a );

	printf( "\n a = %d", a );

	getch();
	return 0;
}

void cube( int *pa )
{
	*pa = (*pa) * (*pa) * (*pa);
	printf( "\n *pa = %d", *pa );
}
