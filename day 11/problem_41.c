//wap to print sum by function
#include<stdio.h>
int sum(int,int);
int main(){
    int a,b,s;
    printf("enter the two number:-");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("sum of two number:%d",s);
    return 0;
}

int sum(int m,int n){
    return m+n;

}