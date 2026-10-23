#include <stdio.h>

int main()
{
    int choice, a, b;

    do
    {
        printf("\n--- Calculator Menu ---\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 to exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5)
        {
            printf("Enter the first number: ");
            scanf("%d", &a);

            printf("Enter the second number: ");
            scanf("%d", &b);
        }

        switch (choice)
        {
            case 1:
                printf("Addition = %d\n", a + b);
                break;

            case 2:
                printf("Subtraction = %d\n", a - b);
                break;

            case 3:
                printf("Multiplication = %d\n", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Division = %.2f\n",
                           (float)a / b);
                else
                    printf("Cannot divide by zero!\n");
                break;

            case 5:
                if (b != 0)
                    printf("Modulus = %d\n", a % b);
                else
                    printf("Cannot use zero as divisor!\n");
                break;

            case 0:
                printf("Exiting calculator...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}