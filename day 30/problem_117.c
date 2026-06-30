// wap for student record system
#include <stdio.h>

int main()
{
    char n[100][100];
    int r[100];
    float m[100];
    int ch, c = 0;
    while (1)
    {
        printf("enter the choice:-");
        printf("\n1.add record\n2.display\n3.exit\n");
        scanf("%d", &ch);
        if (ch == 1)
        {
            if (c < 50)
            {
                printf("enter:\nRoll.no\nName\nMarks\n");
                scanf("%d %s %f", &r[c], n[c], &m[c]);
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
                printf("\n----student record------\n");
                for (int i = 0; i < c; i++)
                {

                    printf("|roll.no-%d|name-%s|mark-%.2f|\n", r[i], n[i], m[i]);
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