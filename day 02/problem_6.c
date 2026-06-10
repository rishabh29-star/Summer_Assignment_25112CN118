#include<stdio.h>
int main(){
    int r, n,c=0;
    printf("enter the number :");
    scanf("%d",&n);
    while (n!=0)
    {
      r=n%10;
      c=c*10+r;
      n/=10;  /* code */
    }
    printf("reverse of digit =%d",c);
    return 0;
}