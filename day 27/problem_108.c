//wap for marks management 
#include <stdio.h>

int main()
{
    float s1, s2, s3, s4, s5, total, per;
    printf("Enter marks for 5 subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    per = total / 5;

    printf("\n--- Marksheet ---\n");
    printf("Total: %.2f / 300\nPercentage: %.2f%%\n", total, per);

    if (per >= 80)
        printf("Grade: A\n");
    else if (per >= 60)
        printf("Grade: B\n");
    else if (per >= 40)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}
