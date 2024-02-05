#include<stdio.h>
int main()
{
	int length,width,area;
	//Enter the lenght of Rectangle
	printf("Enter the lenght of Rectangle:");
	scanf("%d",&length);
	
	//Enter the width of Rectangle
	printf("Enter the width of Rectangle:");
	scanf("%d",&width);
	
	//formula to find Area of Rectangle
	area = length*width;
	printf("Area of Rectangle is: %d",area);
	return 0;
}
