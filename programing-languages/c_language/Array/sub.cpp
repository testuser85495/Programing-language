#include<stdio.h>

int main()
{
	int i,j,array1[2][2],array2[2][2],result[2][2];
	
		printf("===============1a======\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			//printf("enter a number:\n");
			scanf("%d",&array1[i][j]);
		}
		
	}
		printf("===============2a======\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			//printf("enter a number:\n");
			scanf("%d",&array2[i][j]);
		}
		
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			//printf("%d",array1[i][j] - array2[i][j]);
			result[i][j] = array1[i][j] - array2[i][j];
			printf("%d",result[i][j]);
			
			
		}
		printf("\n");
		
	}
	
	
	return 0;
}
