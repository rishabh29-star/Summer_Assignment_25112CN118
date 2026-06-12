//wap to write function for palindrome
#include<stdio.h>
int palin(int);
int main(){
    int a;
    printf("enter the number:-");
    scanf("%d",&a);

    if(palin
    (a))
   {
        printf("no. is palindrome");
    }
    else
    {
        printf(" no. is not palindrome");
        
    }
    return 0;
}

int palin(int m){
   
    int k,r,s=0;
    k=m;
    while (k!=0)
    {
        /* code */
        
        r=k%10;
        s=s*10+r;
        k=k/10;
    }

    return(s==m);

}