// wap for employee record system
#include <stdio.h>

struct employee
{
    char n[100];
    int r;
    float m;
};
int main()
{
    int ch, c = 0;
    int v = 0;
    struct employee e[v];
    while (1)
    {
        printf("enter the choice:-");
        printf("\n1.add record\n2.display\n3.exit\n");
        scanf("%d", &ch);
        if (ch == 1)
        {
            if (c < 50)
            {
                printf("enter:\nId\nName\nSalary\n");
                scanf("%d %s %f", &e[c].r, e[c].n, &e[c].m);
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
                printf("\n----employee record------\n");
                for (int i = 0; i < c; i++)
                {

                    printf("|Id.no-%d|Name-%s|Salary-%.2f/m|\n", e[i].r, e[i].n, e[i].m);
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