//function: w/o return_type w/o parameter

#include<stdio.h>
//function create w/o return type w/o parameter
void Add()
{
	int num1,num2,result;
	
	
	printf("Enter 1st number: ",num1);
	scanf("%d",&num1);
	
	printf("Enter 2nd number: ",num2);
	scanf("%d",&num2);
	
	result=num1+num2;
	printf("addition of %d + %d = %d\n",num1,num2,result);
	
	result=num1-num2;
	printf("subtraction of %d - %d = %d\n",num1,num2,result);
	
	result=num1*num2;
	printf("multiplication of %d * %d = %d\n",num1,num2,result);
	
	result=num1/num2;
	printf("dividend of %d / %d = %d\n",num1,num2,result);

	
}
int main()
{
	//function call
	Add();
	 
	return 0;
} 
