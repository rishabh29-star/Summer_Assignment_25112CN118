// wap to print character triangle
#include<stdio.h>
int main(){
    int i;
    for ( i = 0; i <=5; i++)
    {
        for (  int j = 0 ; j <i; j++)
        {
            printf(" %c",'A'+j);/* code */
        }
        printf("\n");
        /* code */
    }
    return 0;
}