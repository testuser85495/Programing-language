//factriol

#include<stdio.h>

int main()
{
	int num,i,fact;
	
	printf("Enter number for factriol:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("fact of  %d is %d",num,fact);
	return 0;
}
