// wap for binary search in array
#include <stdio.h>
int main()
{
    int a[100], beg, mid, end, n, i, ele;
    printf("enter the number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);
    }
    printf("enter the target  element:");
    scanf("%d", &ele);
    beg = 0;
    end = n - 1;
    mid = (beg + end) / 2;
    while (beg <= end)
    {
        if (a[mid] == ele)
        {
            break;
        }
        else if (a[mid] < ele)
        {
            beg = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
        mid = (beg + end) / 2;
    }
    if (a[mid] == ele)
    {
        printf("the element found");
    }
    else
    {
        printf("the element not found");
    }

    return 0;
}