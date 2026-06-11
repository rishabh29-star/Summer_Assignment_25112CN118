#include<stdio.h>
int main(){
    int n,r,s=0,c=1;
    printf("enter the decimal number:");
    scanf("%d",&n);
    while(n>0){
        r=n%2;
        if (r==1)
        {
            s+=c;
        }
            n=n/2;
            c*=10;
            /* code */
    }
        printf("%d",s);
        return 0;
        

}