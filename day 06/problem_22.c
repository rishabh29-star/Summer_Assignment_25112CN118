#include<stdio.h>
int main(){
    int n,r,s=0,c=1;
    printf("enter the binary number:");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        if (r==1)
        {
            s+=c;
        }
            n=n/10;
            c*=2;
            /* code */
    }
        printf("%d",s);
        return 0;
        

}