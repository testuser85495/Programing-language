#include<stdio.h>

int main()
{
	int length,area;
	//Input lenght of Square
	printf("Enter the lenght of square:");
	scanf("%d",&length);
	
	//formula to find area of Square
	area = length * length;
	printf("Area of square is: %d",area);
	
	return 0;
}
