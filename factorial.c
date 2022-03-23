#include<stdio.h>
int find_factorial(int);
int main()
{
    int num, fact;
    //ask user for the input and store it in num
    printf("\n enter any integer number:");
    scanf("%d",&num);

    //calling our user defined function
    fact = find_factorial(num);

    //displaying factorial of input number
    printf("\n factorial of %d is : %d",num , fact);
    return 0;
}
int find_factorial(int n)
{

    //factorial of 0 is 1
    if (n==0)
        return(1);

    //function calling itself: recursion
    return(n*find_factorial(n-1));
}
