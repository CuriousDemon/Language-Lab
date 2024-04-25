// Calculator program
#include <stdio.h>
#include <stdlib.h>

int menu();
void calc();
void add();
void sub();
void mul();
void division();

int menu()
{
    int menuVal;
    printf("Enter a number from the list below\n\n");

    printf("1. Addition\n"); // Calculator menu, user must enter a value from 1 - 4 for the program to work
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n\n");

    printf("Enter number: "); // User input for the calculator menu
    scanf("%d", &menuVal);
    return menuVal;
}

void calc(int n)
{
    int result;
    switch (n) // switch statement for menu
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();
        break;
    case 4:
        division();
        break;
    default:
        printf("Enter correct number e.g 1 - 4\n"); // Outputted if the user enters a value other than 1 - 4
        break;
    }
}

void add()
{
    float num1, num2;
    printf("You entered Addition\n\n");

    printf("Enter first number: "); // User input for first number
    scanf("%f", &num1);

    printf("Enter second number: "); // User input for second number
    scanf("%f", &num2);

    printf("\n");
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2); // Addition output
}

void sub()
{
    float num1, num2;
    printf("You entered Subtraction\n\n");

    printf("Enter first number: "); // User input for first number
    scanf("%f", &num1);

    printf("Enter second number: "); // User input for second number
    scanf("%f", &num2);

    printf("\n");

    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2); // Subtraction output
}

void mul()
{
    float num1, num2;
    printf("You entered Multiplication\n\n");

    printf("Enter first number: "); // User input for first number
    scanf("%f", &num1);

    printf("Enter second number: "); // User input for second number
    scanf("%f", &num2);

    printf("\n");

    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2); // Multiplication Output
}

void division()
{
    float num1, num2;
    printf("You entered Division\n\n");

    printf("Enter first number: "); // User input for first number
    scanf("%f", &num1);

    printf("Enter second number: "); // User input for first number
    scanf("%f", &num2);

    printf("\n");

    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
}

int main()
{
    int menuVal; // Variable for the number the user inputs
    menuVal = menu();
    printf("\n");
    calc(menuVal);
    return 0;
}
// End of code
