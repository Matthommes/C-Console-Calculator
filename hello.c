#include <stdio.h>

void printMenu()
{
    printf("Simple Calculator\n");
    printf("Pick a Mathematical operation you wish to perform: \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Modulo \n");
    printf("6. Exit \n");
}

int main()
{
    unsigned short int choice;
    unsigned short int num1, num2;
    int result;
    char continueCalc = 'y';

    while (continueCalc == 'y')
    {
        printMenu();
        printf("Enter your choice: ");
        scanf("%hu", &choice);

        if (choice >= 1 && choice <= 5)
        {
            printf("Enter two numbers: \n");
            scanf("%hu %hu", &num1, &num2);
            switch (choice)
            {
            case 1:
                result = num1 + num2;
                printf("The sum of %hu and %hu = %hd \n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("The difference of %hu and %hu = %hd \n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("The product of %hu and %hu = %hd \n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0)
                {
                    result = num1 / num2;
                    printf("The quotient of %hu and %hu = %hd \n", num1, num2, result);
                }
                else
                {
                    printf("Error, division by zero is not allowed!");
                }
                break;
            case 5:
                if (num2 != 0)
                {
                    result = num1 % num2;
                    printf("The remainder of %hu and %hu = %hd \n", num1, num2, result);
                }
                else
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                break;
            }
        }
        else if (choice == 6)
        {

            printf("You Exited the program");
            break;
        }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }

        if (choice != 6)
        {
            printf("Do you want to perform another operation? (y/n): ");
            scanf(" %c", &continueCalc);
        }
    }

    return 0;
}