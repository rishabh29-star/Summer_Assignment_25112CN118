//wap to write function for fibonacci
#include<stdio.h>
int fibo(int);
int main(){
    int a;
    printf("enter the number:-");
    scanf("%d",&a);
    fibo(a);
    return 0;
}

int fibo(int m){

   int t,a=1,b=1;
  
    for (int i = 0; i < m; i++)
    {
        if (i<=1)
        {
          printf("%d",i);  /* code */
        }
        else
        {
            t=a;
            printf("%d",a);  /* code */
            b=a+b;
            a=b;
            b=t;

        }
        
        
    }
    
  

}