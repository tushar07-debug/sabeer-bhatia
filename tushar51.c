#include<stdio.h>
//3,4,5,6,9,8,1,2 *(a+5)
void main()
{
    int a[8] = {1,2,3,4,5,6,7,8},tem,x;
    for (int i = 0;i<8;++i)
    {
        printf("a[%d]=%d \n",i,a[i]);
    }
    printf("\n");
    //scnf("%d",&tem);
    x=*(a+7);
    printf("x=%d",x);
    printf("\n the last value is %d:",x);
    for(int i = 7;i>0;--i)
        {
        a[i]=a[i-1]; printf("\n the new value of a at %d the position = %d:",i,a[i]);
    }
    a[0]=x;
    for (int i = 0; i<0 ; ++i){
        printf("\n a[%d]=%d \n",i,a[i]);
                }

}
