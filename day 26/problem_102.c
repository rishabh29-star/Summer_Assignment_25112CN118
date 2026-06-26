// wap for voting eligibility 
#include<stdio.h>

int main(){
    int n ;
    printf("enter your age :-");
    scanf("%d",&n);
    if (n<18)
    {
        printf("not eligible for voting");
    }
    else
    {
        printf("you are now eligible for voting");
    }
    return 0;
}