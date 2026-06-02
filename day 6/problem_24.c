#include<stdio.h>
int main(){
    int n,c=1,a,b;
    printf("enter the number & power :");
    scanf("%d%d",&a,&b);
    n=b;
    while(b!=0){
       c*=a;
       b--;
    }
        printf("%d to the power %d = %d",a,n,c);
        return 0;
        

}