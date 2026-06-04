/*
wap to print number triangle
1
22
333
4444
55555
*/
#include<stdio.h>
int main(){
    int i;
    for ( i = 0; i <=5; i++)
    {
        for ( int j = 1; j <=i; j++)
        {
            printf("%d",i);/* code */
        }
        printf("\n");
        /* code */
    }
    return 0;
}