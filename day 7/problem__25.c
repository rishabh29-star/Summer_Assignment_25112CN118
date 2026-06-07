//wap for the factorial by recursion
#include<stdio.h>
int fac(int);
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("%d",fac(n));
    return 0;
}

int fac(int n){
    if (n==0)
    {
        return 1;/* code */
    }
    return(n*fac(n-1));    
}