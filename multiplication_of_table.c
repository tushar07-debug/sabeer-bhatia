/* Program to print the multiplication table of a given number */
#include <stdio.h>
int main() {
   int number, i;

   printf("Please enter any number to find multiplication table:");
   scanf("%d", &number);
   printf("Multiplication table for the given number %d: ", number);
   printf("\n");
   for(i=1;i<=12;i++){
      printf("%d x %d = %d", number, i, number * i);
      printf("\n");
   }
   getch();
   return 0;
}
