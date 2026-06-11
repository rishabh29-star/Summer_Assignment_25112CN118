// wap for reverse of number by recursion
#include<stdio.h>
int rev(int,int);
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("%d",rev(n,0));
    return 0;
}

int rev(int m,int s){
    if (m==0)
    {
       return s; /* code */
    }
    
    
    return rev(m/10,s*10+m%10);
    
}