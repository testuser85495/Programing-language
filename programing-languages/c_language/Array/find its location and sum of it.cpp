#include<stdio.h>
int main()
{
	
	int array[5];
	int i,add=0;
	
	for (i=0;i<5;i++)
	{
		printf("enter num:");
		scanf("%d",&array[i]);
	}
	
	for (i=0;i<5;i++)
	{
		printf("%d\n",array[i]);
		add += array[i]; 
	}
	
	
	printf("%d",add);
	
	
	return 0;
}
