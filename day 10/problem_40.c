/* wap yo print 
 A
 A B A
 A B C B A
 A B C D C B A
 A B C D E D C B A
*/
#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" %c", 'A'+j); 
                             
        }

        for (int j = i; j >= 0; j--)
        {
            printf(" %c", 'A'+j); 
        }
        printf("\n");
    }
    
    return 0;
}