#include <stdio.h>
int main()
{
    int n, n1, i, c = 0;
    printf("enter the number :");
    scanf("%d%d", &n, &n1);
    while (n1 != 0)
    {
        i = n1;
        n1 = n % n1;
        n = i;
    }
    printf("%d", i);

    return 0;
}
