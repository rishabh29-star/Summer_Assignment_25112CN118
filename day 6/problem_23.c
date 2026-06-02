#include<stdio.h>
int main(){
    int n,s=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n>0){
        if (n&1)
        {
            s++;
            /* code */
        }
        n=n>>1;
    }
        printf("%d",s);
        return 0;
        

}