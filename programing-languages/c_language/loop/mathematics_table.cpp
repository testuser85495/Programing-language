//take number input from user & table for it 
#include<stdio.h>

int main()
{
	int i,num,result;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	for(i=1;i<=10;++i)
	{
		result=num*i;
		printf("%d X %d = %d\n ",num,i,result);
	}
	return 0;
}
