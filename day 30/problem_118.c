// wap for library management system
#include <stdio.h>

int main()
{
    char n[100][100];
    int r[100];
    char a[100][100];
    int ch, c = 0;
    while (1)
    {
        printf("enter the choice:-");
        printf("\n1.add book\n2.display record\n3.exit\n");
        scanf("%d", &ch);
        if (ch == 1)
        {
            if (c < 50)
            {
                printf("enter:\nId\nName of book\nAuthor\n");
                scanf("%d %s %s", &r[c], n[c], a[c]);
                c++;
            }
            else
            {
                printf("space is full\n");
            }
        }
        else if (ch == 2)
        {
            if (c == 0)
            {
                printf("No record found\n");
            }
            else
            {
                printf("\n----library record------\n");
                for (int i = 0; i < c; i++)
                {

                    printf("|Id:%d|Book Name:%s|Author:%s|\n", r[i], n[i], a[i]);
                }
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}