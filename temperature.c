/*c program to covert temperature*/
#include<stdio.h>
int main()
{
    float celsius , fahrenheit;
    /*input temperature*/
    printf(" enter the temperature in celsius:");
    scanf("%f" , &celsius);

    /*formula*/
    fahrenheit = (9/5*celsius)+32;
    printf("%.2f celsius = %.2f fahrenheit",celsius,fahrenheit);
    return 0;
}
