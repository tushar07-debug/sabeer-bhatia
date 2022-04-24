#include<stdio.h>
int main()
{
    char c;
    printf("enter a character:");
    scanf("%c",&c);

    //%d display the interger value of a character
    //%c display the actual character
    printf("ASCII VALUE OF %c = %d",c,c);
    return 0;
}
