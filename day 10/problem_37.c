/*wap to print
     *
    ***
   *****
  *******
 *********
*/

#include<stdio.h>
int main(){
    int i;
    for ( i = 1; i <=5; i++)
    {
       for (int  k = 0; k <= 5-i; k++)
       {
           printf(" ");/* code */
        /* code */
       }
       
        for ( int j = 0; j <(2*i-1); j++)
        {
            printf("*");/* code */
        }
        printf("\n");
    }
        /* code */
    return 0;
}