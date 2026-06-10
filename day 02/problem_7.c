#include<stdio.h>
int main(){
    int r, n,c=1;
    printf("enter the number :");
    scanf("%d",&n);
    while (n!=0)
    {
      r=n%10;
      c*=r;
      n/=10;  /* code */
    }
    printf("product of digit =%d",c);
    return 0;
}