#include <stdio.h>

// User Defined Functions
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}
int modulus(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Modulus by zero\n");
        return 0;
    }
    return a % b;
}

int main()
{
    int choice, a, b, result;

    while (1)
    {
        printf("\n----- Menu -----\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting program.\n");
            break;
        }

        printf("Enter first numbers: ");
        scanf("%d", &a);


        printf("Enter second numbers: ");
        scanf("%d", &b);
        
        switch (choice)
        {
        case 1:
            result = add(a, b);
            printf("Result: %d\n", result);
            break;
        case 2:
            result = subtract(a, b);
            printf("Result: %d\n", result);
            break;
        case 3:
            result = multiply(a, b);
            printf("Result: %d\n", result);
            break;
        case 4:
            result = divide(a, b);
            printf("Result: %d\n", result);
            break;
        case 5:
            result = modulus(a, b);
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
