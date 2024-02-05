//patten for 123...10


#include<stdio.h>
int i = 4,j;
int n=1;
int main()
{
	for(i=0;i < 4;i++)
	{
		for(j=0;j<=i;j++)
		
		{
			printf("%d " , n++);	
		}
		printf("\n");
	}
	
	return 0;
}
