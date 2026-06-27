//wap for salary management
#include <stdio.h>

int main()
{
    float basic, hra, da, gross;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    // Assuming 20% HRA and 50% DA
    hra = 0.2 * basic;
    da = 0.5 * basic;
    gross = basic + hra + da;

    printf("\n--- Salary Slip ---\n");
    printf("Basic: %.2f\nHRA: %.2f\nDA: %.2f\n", basic, hra, da);
    printf("Gross Salary: %.2f\n", gross);
    return 0;
}
