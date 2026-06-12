// wap to write function for armstrong
#include <stdio.h>
#include <math.h>
int arm(int);
int main()
{
    int a;
    printf("enter the number:-");
    scanf("%d", &a);

    if (arm(a))
    {
        printf("no. is armstrong");
    }
    else
    {
        printf(" no. is not armstrong");
    }
    return 0;
}

int arm(int m)
{

    int k, b, c = 0, r, s = 0;
    b = m;
    while (b != 0)
    {
        b = b / 10;
        c++;
    }
    
    k = m;
    while (k != 0)
    {
        r = k % 10;
        s = s + round(pow(r,c));
        k = k / 10;
    }

    return (m == s);
}