#include<stdio.h>
int main(){
    int r, n1,n,c=0;
    printf("enter the number :");
    scanf("%d",&n1);
    n=n1;
    while (n!=0)
    {
      r=n%10;
      c=c*10+r;
      n/=10;  /* code */
    }
    if (n1==c)
    {
        printf("number is palindrome");/* code */
    }
    else
    {
      printf("number is not palindrome"); /* code */
    }
    
    
    return 0;
}