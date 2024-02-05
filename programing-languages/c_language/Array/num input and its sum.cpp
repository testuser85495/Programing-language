#include<stdio.h>
int mult(int array[])
{
	int x,y,sum =1;
	for(int i=0;i<5;i++)
	{
		sum *= array[i];
	}
	return sum;
}
int main()
{
	int i,array[5];
	
	for(i=0;i<=5;i++)
	{
		printf("Enter a numbers:");
		scanf("%d",&array[i]);
	}
	
	printf("multiplaction is %d",mult(array));
	
	return 0;
}
