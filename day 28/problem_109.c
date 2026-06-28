//wap for library mangement
#include<stdio.h>

struct lib
{
 int d;
 char b[100];
 char name[100];
};

int main(){
    int n;
    printf("enter the number of times");
    scanf("%d",&n);
    struct lib l[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter :-\nissue_date\nname of person\nname of book\n");
        scanf("%d %s %s",&l[i].d,l[i].name,l[i].b);
    }
    
    printf("\n------library records------\n");
    for (int  i = 0; i <n; i++)
    {
        printf("%d.issued_date:%d | name:%s | book name:%s\n",i+1,l[i].d,l[i].name,l[i].b);
    }

    return 0;
    
}