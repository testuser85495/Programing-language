// Function : w/o return_type with parameter

#include<stdio.h>
void calculator(int num1, int num2, int result)
{
	result=num1+num2;
	printf("addition of %d + %d = %d\n",num1,num2,result);
	
	result=num1-num2;
	printf("subtraction of %d - %d = %d\n",num1,num2,result);
	
	result=num1*num2;
	printf("multiplication of %d * %d = %d\n",num1,num2,result);
	
	result=num1/num2;
	if(num2 != 0)
	{
		printf("dividend of %d / %d = %d\n",num1,num2,result);
	}
	else
	{
		printf("%d / %d Cannot divide by zero.\n",num1,num2);
	}
	
}

int main()
{
	int num1,num2,result;
	
	printf("Enter 1st number: ",num1);
	scanf("%d",&num1);
	
	printf("Enter 2nd number: ",num2);
	scanf("%d",&num2);
	
	
	
	calculator(num1, num2,result);
	return 0;
}

