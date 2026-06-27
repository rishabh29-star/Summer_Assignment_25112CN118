//wap for employee management 
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    char dept[30];
};

int main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee e[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter ID, Name, Dept for employee %d: ", i + 1);
        scanf("%d %s %s", &e[i].id, e[i].name, e[i].dept);
    }

    printf("\n--- Employee List ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID: %d | Name: %s | Dept: %s\n", e[i].id, e[i].name, e[i].dept);
    }
    return 0;
}
