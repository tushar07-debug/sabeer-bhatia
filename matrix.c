#include<stdio.h>
int main()
{
    int i,j ;
    int a[3][3] = {2,3,4,5,8,9,7,5,6};
    for(int i = 0; i<3; i++){
    for(int j =0; j<3; j++) {
    printf("%d",a[i][j]);
    } printf("\n");
    };
    return 0;
}
