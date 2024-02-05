#include<stdio.h>

int main()
{
	int add,i;
	for( i=100;i>=0;i--)
	{
		printf("%d\n",i);
		add +=i;
	}
	
	printf("%d",add);
	return 0;
}

