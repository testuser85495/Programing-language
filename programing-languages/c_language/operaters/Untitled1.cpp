//Arithmetic Operators
//are +: Addition
//-:Subtract
//*:Multiply
///:Divide





#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter your first number :");
	scanf("%d",&a);
	printf("enter your second number :");
	scanf("%d",&b);
	c=a-b;
	printf("your Subtraction is :%d \n",c);
	c=a+b;
	printf("your Addition is :%d \n",c);
	c=a*b;
	printf("your Multiplication is :%d \n",c);
	c=a/b;
	printf("your Division is :%d\n",c);
	return 0;
}
