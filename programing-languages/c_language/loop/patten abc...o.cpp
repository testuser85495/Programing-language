//patten form abc...o


#include<stdio.h>
int i,j;
char n = 'a';
int main()
{
	for(i=0;i < 5;i++)
	{
		for(j=0;j<=i;j++)
		
		{
			printf("%c " , n++);	
		}
		printf("\n");
	}
	
	return 0;
}
