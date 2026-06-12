//wap to write function for perfect number
#include<stdio.h>
int per(int);
int main(){
    int a;
    printf("enter the number:-");
    scanf("%d",&a);

    if(per(a))
    {
        printf("no. is perfect");
    }
    else
    {
        printf(" no. is not perfect");
        
    }
    return 0;
}

int per(int m){
    int s=0;
   
   for (int i = 1; i <m; i++)
   {
    if (m%i==0)
    {
        s+=i;
        
    }
    
    
   }
   

    return(s==m);

}