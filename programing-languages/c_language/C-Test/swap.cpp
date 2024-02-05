//swap without using 3rd virable

#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter 1st num:");
	scanf("%d",&num1);

	printf("Enter 2st num:");
	scanf("%d",&num2);
	
	num1 = num1+num2;
	num2 = num1-num2;
	num1 = num1-num2;
	
	printf("num1: %d\n",num1);
	printf("num2: %d",num2);
		
	
	
	return 0;
}
