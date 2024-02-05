//if age if < 18 driver
//if == 18 lerning
//else not eleagible


#include<stdio.h>

int main()
{
	int age;
	
	printf("Enter name:");
	scanf("%d",&age);
	
	if(age >= 18)
	{
		if(age == 18)
		{
			printf("lerning licence");
		}
		
		else
		{
			
			printf("driving licence");
		}	
	}
	else
	{
		printf("not eligibilit");
	}
	
	return 0;
}
