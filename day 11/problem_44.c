//wap to factorial by function
#include<stdio.h>
int fibo(int);
int main(){
    int a;
    printf("enter the  number:-");
    scanf("%d",&a);
     printf("factorial no.:%d", fibo(a));
    return 0;
}

int fibo(int m){
     int f=1;
    for (int  i = 1; i <=m; i++)
    {
       f*=i; /* code */
    }
    return(f);
}