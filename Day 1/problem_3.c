#include<stdio.h>
int main(){
    int n,i,c=1;
    printf("enter the number :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
       c*=i;
    }
    printf("factorial=%d",c);
    return 0;
}
