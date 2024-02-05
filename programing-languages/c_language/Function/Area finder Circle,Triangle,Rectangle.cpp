//=============Area Finder============= using function
//	1. Circle
//	2. Triangle
//	3. Rectangle




#include<stdio.h>
int Rectangle()
{
	// Implement the logic for Rectangle
	int lenght,width,area;
	printf("Enter the lenght of Rectangle:");
	scanf("%d",&lenght);
	
	printf("Enter the width of Rectangle:");
	scanf("%d",&width);
	
	area = lenght*width;
	printf("the Area of Rectangle is %d",area);

	printf(">>>>thank you<<<<<<");
	
}

int Triangle()
{
	// Implement the logic for Triangle
	int base,height,area;
	
	printf("Enter the base of Triangle:");
	scanf("%d",&base);
	
	printf("Enter the height of Triangle:");
	scanf("%d",&height);
	
	area = (base * height) / 2;
	printf("the area of Triangle is %d",area);
	
	printf(">>>>thank you<<<<<<");
}

float circle()
{
	// Implement the logic for Circle
	float pi = 3.14;
	float radius,area;
	printf("Enter the radius of circle:");
	scanf("%f",&radius);
	
	area = pi*radius*radius;
	printf("the area of circle is %.3f",area);
	
	printf("\n>>>>thank you<<<<<<");
	
}


void Area_finder(int choice)
{
	
	if (choice >= 1 && choice <= 3) 
	{
        switch (choice) 
		{
            case 1:
                
                printf("You selected Circle:-\n");
                circle();
                break;
            case 2:
               
                printf("You selected Triangle:-\n");
                Triangle();
                break;
            case 3:
                
                printf("You selected Rectangle:-\n");
                Rectangle();
                break;
        }
    } 
	else
	{
        printf("Invalid choice!!!\n");
    }
}
 

int main()
{
	int choice;
	printf("====Area Finder====\n");
	printf("1. Circle\n");
	printf("2. Tringle\n");
	printf("3. Rectangle\n");
	
	printf("Enter your choice:  ");
	scanf("%d",&choice);
	
	printf("your choice is %d\n",choice);
	
	Area_finder(choice);
	return 0;
}
