#include <stdio.h>
int todecimal(long bno);
int main(){
   long bno;
   int dno;
   printf("Enter a binary number: ");
   scanf("%ld", &bno);
   dno=todecimal(bno);
   printf("The decimal value is:%d\n",dno);
   return 0;
}
int todecimal(long bno){
   int dno = 0, i = 0, rem;
   while (bno != 0) {
      rem = bno % 10;
      bno /= 10;
      dno += rem * pow(2, i);
      ++i;
   }
   return dno;
}
