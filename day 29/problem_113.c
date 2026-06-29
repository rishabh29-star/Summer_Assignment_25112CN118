//wap for calculator
#include <stdio.h>

int main() {
    int choice;
    float a, b;

    while (1) {
        printf("\n1.Add 2.Sub 3.Mul 4.Div 5.Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 5) 
        break;

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice) {
            case 1:
             printf("Result = %.2f\n", a + b);
              break;
            case 2: 
            printf("Result = %.2f\n", a - b);
             break;
            case 3:
             printf("Result = %.2f\n", a * b); 
             break;
            case 4: 
            printf("Result = %.2f\n", a / b);
             break;
            default: 
            printf("Invalid option\n");
        }
    }
    return 0;
}
