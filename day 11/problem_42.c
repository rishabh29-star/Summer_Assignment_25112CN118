// wap to find maximum by function

#include<stdio.h>
int max(int,int);
int main(){
    int a,b;
    printf("enter the two number:-");
    scanf("%d%d",&a,&b);

    if(max(a,b))
    {
        printf("maximum no.:%d",a);
    }
    else
    {
        printf("maximum no.:%d",b);
        
    }
    return 0;
}

int max(int m,int n){
   
    return(m>n);
}