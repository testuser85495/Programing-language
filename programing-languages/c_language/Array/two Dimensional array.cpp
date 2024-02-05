#include<stdio.h>

int main()
{
	int i,j,array[4][3]={{10,20,30},{40,50,60},{70,80,90},{100,110,120}};
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d %d %d\n",i,j,array[i][j]);
		}
	}
	
	return 0;
}
