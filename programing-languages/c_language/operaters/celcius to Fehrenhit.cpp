#include<stdio.h>
int main()
{
	float celcius,fahrenheit;
	/* Input temperature in celsius */
	printf("Enter temperature in celsius:");
	scanf("%f",&celcius);
	
	/* celsius to fahrenheit formula */
	fahrenheit =(celcius*9/5)+32;
	printf("fahrenheit %.3f",fahrenheit);
	
	return 0;
}
