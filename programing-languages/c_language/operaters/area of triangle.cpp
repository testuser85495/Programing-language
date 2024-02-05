#include<stdio.h>
int main()
{
	int base,height,area;
	//Input the base of triangle
	printf("Enter the base of triangle:");
	scanf("%d",&base);
	//Input th height of triangle
	printf("Enter the height of triangle:");
	scanf("%d",&height);
	
	//formula to find the area of triangle
	area=(base*height)/2;
	
	printf("the area of triangle is:%d",area);
	return 0;
}
