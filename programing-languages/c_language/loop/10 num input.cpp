#include<stdio.h>

int main()
{
	int i,num,add=0,even=0,odd=0;
	
	for(i=1;i<10;i++)
	{
		printf("%d Enter number:",i);
		scanf("%d",&num);
		add +=num;
		if(num %2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		
	}
	
	
	printf("Add is %d\n",add);
	printf("even num %d\n",even);
	printf("odd num %d\n",odd);
	return 0;
	
}
