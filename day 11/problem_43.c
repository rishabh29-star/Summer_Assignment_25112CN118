//wap to find prime by function
#include<stdio.h>
int prime(int);
int main(){
    int a,b;
    printf("enter the number:-");
    scanf("%d",&a);

    if(prime(a))
    {
        printf("no is prime");
    }
    else
    {
        printf("no is not prime");
        
    }
    return 0;
}

int prime(int m){
    int c=0;
    for (int i = 1; i <=m; i++)
    {
       if (m%i==0)
       {
         c++;
       }
        /* code */
    }
    
    return(c==2);
}