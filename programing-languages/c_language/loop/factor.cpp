#include<stdio.h>
int fact(int n)
{
	int y=1;
	for(int i=1; i<=n;i++)
	{
		y=y*i;	
	}
	
	return n,y;
}
int main()
{
	int n,y=1;
	
	printf("enter num");
	scanf("%d",&n);  
	
	printf("factriol of %d is %d",n,fact(n));
	
	
	return 0;
}
