#include <stdio.h>
int main()
{
	float meter,cm;
	
	/* Input for meter*/
	printf("Enter the length of meter : ");
	scanf("%f",&meter);
	
	/*meter to centimeter formula*/
	cm = meter * 100;
	printf("meter : %.2f",meter);
	printf(" is equal to centimeter: %.2f",cm);
	return 0;
}
