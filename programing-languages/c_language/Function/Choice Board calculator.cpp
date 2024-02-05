#include<stdio.h>
int num1, num2, result;
void choicemenu();
int Addition() 
{
    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    result = num1 + num2;
    printf("Addition of %d + %d = %d\n", num1, num2, result);
}

int Subtraction() 
{
    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    result = num1 - num2;
    printf("Subtraction of %d - %d = %d\n", num1, num2, result);
}

int Multiplication() 
{
    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    result = num1 * num2;
    printf("Multiplication of %d * %d = %d\n", num1, num2, result);
}

int Division() 
{
    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    if (num2 != 0) 
	{
        result = num1 / num2;
        printf("Division of %d / %d = %d\n", num1, num2, result);
    } 
	else 
	{
        printf("Error: Division by zero is not allowed.\n");
    }
}

int Modulo() 
{
    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    if (num2 != 0) 
	{
        result = num1 % num2;
        printf("Modulo of %d %% %d = %d\n", num1, num2, result);
    } 
	else 
	{
        printf("Error: Modulo by zero is not allowed.\n");
    }
}

void calculator(int choice) 
{
    char repeat;

    if (choice >= 1 && choice <= 5) 
	{
        switch (choice) 
		{
            case 1:
                printf("You selected Addition:\n");
                Addition();
                break;
            case 2:
                printf("You selected Subtraction:\n");
                Subtraction();
                break;
            case 3:
                printf("You selected Multiplication:\n");
                Multiplication();
                break;
            case 4:
                printf("You selected Division:\n");
                Division();
                break;
            case 5:
                printf("You selected Modulo:\n");
                Modulo();
                break;
        }

        printf("Do you want to continue? ['y' for yes, 'n' for no]: ");
        scanf(" %c", &repeat);
        if (repeat == 'y' || repeat == 'Y') 
		{
            printf("\n");
            choicemenu();
        } 
		else 
		{
            printf("Thank You\n");
        }
    } 
	
	else if (choice == 6) 
	{
        printf("You selected Exit.\n");
    } 
	else 
	{
        printf("Invalid choice. Please choose a number between 1 and 6.\n");
    }
}


void choicemenu()
{
    int choice;
    
    printf("===========Choice Board===========\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    printf("6. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Your choice is %d\n", choice);

    calculator(choice);
}

int main() 
{
	choicemenu();

    return 0;
}

