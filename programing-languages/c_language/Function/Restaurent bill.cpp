//Restaurent


#include <stdio.h>

int grand_total = 0; // Initialize grand_total to 0
int total,num; // Remove redundant total declaration

void menu();


void pizza() 
{
	
    int  price = 90;

    printf("Enter the Quantity of pizza: ");
    scanf("%d", &num);
    printf("%d pizza you ordered\n", num);

    total = price * num;

    printf("Total Price is: %d\n", total);
    grand_total += total; // Accumulate the total in grand_total
}

void Burgur() 
{
    int  price = 89;

    printf("Enter the Quantity of Burgur: ");
    scanf("%d", &num);
    printf("%d Burgur you ordered\n", num);

    total = price * num;

    printf("Total Price is: %d\n", total);
    grand_total += total;
}

void Pani_Puri() 
{
    int  price = 100;

    printf("Enter the Quantity of Pani_Puri: ");
    scanf("%d", &num);
    printf("%d Pani_Puri you ordered\n", num);

    total = price * num;

    printf("Total Price is: %d\n", total);
    grand_total += total;
}

void Dosa() 
{
    int  price = 80;

    printf("Enter the Quantity of Dosa: ");
    scanf("%d", &num);
    printf("%d Dosa you ordered\n", num);

    total = price * num;

    printf("Total Price is: %d\n", total);
    grand_total += total;
}

void menuchoice(int choice) 
{
    char repeat;
    if (choice >= 1 && choice <= 4) 
	{
        switch (choice) 
		{
            case 1:
                printf("\nyou selected Pizza:\n");
                pizza();
                break;

            case 2:
                printf("\nyou selected Burgur:\n");
                Burgur();
                break;
            case 3:
                printf("\nyou selected Pani-Puri:\n");
                Pani_Puri();
                break;
            case 4:
                printf("\nyou selected Dosa:\n");
                Dosa();
                break;
        }
        
        printf("\nDo You want Anything Else? ['y' for yes, 'n' for no]: ");
        scanf(" %c", &repeat);
        if (repeat == 'y' || repeat == 'Y') 
		{
            printf("\n");
            menu();
        } 
		else 
		{
            printf("Thank You\nYour total Bill: %d/-Rs\n", grand_total);
        }
    }
}

void menu() 
{
    int choice;

    printf("============Welcome To TOPS Restaurant==============\n");
    printf("Srno. Item         Price\n");
    printf("1    Pizza        90/-\n");
    printf("2    Burgur       89/-\n");
    printf("3    Pani-Puri    100/-\n");
    printf("4    Dosa         80/-\n");

    printf("Enter your Dish: ");
    scanf("%d", &choice);
    printf("Your dish is %d\n", choice);

    menuchoice(choice);
}

int main() 
{
    menu();
    return 0;
}

