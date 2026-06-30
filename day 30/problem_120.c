// wap for inventory management system
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
        printf("\n1.add item\n2.display\n3.exit\n");
        scanf("%d", &ch);
        if (ch == 1)
        {
            if (c < 50)
            {
                printf("enter:\nitem Name\nquantity\nprice\n");
                scanf("%s %d %f", n[c], &r[c], &m[c]);
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
                printf("\n----inventory record------\n");
                for (int i = 0; i < c; i++)
                {

                    printf("|%d|Item_Name-%s|Quantity-%d|Price-%.2f|Total=%.2f|\n", i + 1, n[i], r[i], m[i], (r[i] * m[i]));
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