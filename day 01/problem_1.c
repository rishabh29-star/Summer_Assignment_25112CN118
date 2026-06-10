#include<stdio.h>
int main(){
    int n,i,c=0;
    printf("enter the number :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
       c+=i;
    }
    printf("sum=%d",c);
    return 0;
}
