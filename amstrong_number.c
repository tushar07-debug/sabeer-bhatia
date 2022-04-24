/*
* C Program to check whether a number is armstrong number or not
*/
#include <stdio.h>
#include <conio.h>

int main(){
    int number, sum = 0, lastDigit, temp;
    printf("Enter a number : ");
    scanf("%d", &number);
    temp = number;

    while(temp != 0){
        lastDigit = temp%10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
        temp = temp/10;
    }

    if(sum == number){
        printf("%d is Armstrong Number \n", number);
    } else {
        printf("%d is not an Armstrong Number \n", number);
    }
    getch();
    return 0;
}
