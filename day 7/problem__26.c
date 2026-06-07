//wap for fibonacci by recursion
#include<stdio.h>
int fibo(int);
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        /* code */
        printf("%d",fibo(i));
    }
    
    return 0;
}

int fibo(int m){
    if (m<=1)
    {
       return m; /* code */
    }
    
    return(fibo(m-1)+fibo(m-2));
    
}