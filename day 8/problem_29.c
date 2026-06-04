// wap to print half praymid
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for ( i = 0; i < n/2; i++)
    {
        for ( int j = 0; j <=i; j++)
        {
            printf("*");/* code */
        }
        printf("\n");
        /* code */
    }
    return 0;
}