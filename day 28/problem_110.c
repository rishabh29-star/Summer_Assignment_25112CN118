// wap for bank management
#include <stdio.h>
int main()
{
    int n, i, ch;
    int b = 800000;
    printf("enter the number of your regarding choice:-\n");
    printf("1.check the balance\n2.withdraw the money\n3.depost the money\n");
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("the avaible amount:%d", b);
    }
    else if (ch == 2)
    {
        printf("enter the amount:\n");
        scanf("%d", &n);

        if (n <= b)
        {
            printf("withdrawl is successfull\n");
            b -= n;
            printf("the avaible amount:%d\n", b);
        }
        else
        {
            printf("insufficient balance");
        }
    }
    else
    {
        printf("enter the amount:\n");
        scanf("%d", &i);
        printf("deposited successfully\n");
        b += i;
        printf("the avaible amount:%d\n", b);
    }
    return 0;
}