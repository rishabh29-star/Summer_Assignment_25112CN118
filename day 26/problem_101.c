/*                    GAME 1.0
  computer generate a number u have to guess it 
  if u guess higher number , so it said guess low
  if u guess lower number ,so it said guess high 
  if u guess right one , get score */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
     srand(time(0));
     int randomNumder=(rand()%100)+1;
     //printf("Random Number: %d \n",randomNumder);

     int n,m=10;
     while (5>1)
     {
       printf("ener number which u guess  b/w (1 to 100): \n "); /* code */
       scanf("%d",&n);
       if (n==randomNumder && m>=0)
       {
         printf("u have good guessing power \n ");/* code */
         break;
       }
       if (n==randomNumder && m<=-1)
       {
         printf(" better luck next time  \n ");/* code */
         break;
       }
       else if (n>randomNumder)
       {
       printf("guess low \n");
       m-=1;
       continue;
        /* code */
       }
       else
       {
        printf("guess high \n");
        m-=1;
       continue;
       }
       
       
       
     }

     printf("score : (%d /10)\n",m);
     return 0;



}