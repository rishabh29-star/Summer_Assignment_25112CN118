// wap for count word in string
#include <stdio.h>
#include <string.h>
int main()
{
    int  i,word=1;
    char s[100];
    printf("enter the string :-");
    gets(s);
   for ( i = 0;s[i]!='\0'; i++)
   {
    if (s[i]==' '||s[i]=='\n'||s[i]=='\t')
    {
        word++;
    }
    
   }
   printf("total number  of word = %d",word);
    return 0;
}