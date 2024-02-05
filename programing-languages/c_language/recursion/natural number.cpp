#include<stdio.h>
int natural_number(int x)
{
	int add;
	if(x<=0)
	{
		return 0;
	}
	else
	{
		return x+natural_number(x-1);
	}
	
}
int main()
{
	
	int num;
	
	printf("Enter num:");
	scanf("%d",&num);
	
	printf("natural number is :%d",natural_number(num));
	return 0;
}
