#include<stdio.h>
int main(){
    int n,i,c=0;
    printf("enter the number :");
    scanf("%d",&n);
    for ( i = 1; i <=10; i++)
    {
       c=n*i;
       printf("%d*%d=%d \n",n,i,c);
    }
    return 0;
}
