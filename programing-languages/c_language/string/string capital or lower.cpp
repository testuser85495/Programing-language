//Take string from user & find 
//		
//		i/p:
//		Enter string : Hello World
//		
//		o/p:
//		Capital letters : 2
//		Small letters : 8
//		white space : 1



#include<stdio.h>
int main()
{
	char str[100];
	int i,upper=0,small=0,space=0;
	
	printf("Enter a string:");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		
		if(str[i]>='A' && str[i] <='Z')
		{
			upper++;
		}
		else if(str[i]>='a' && str[i] <='z')
		{
			small++;
		}
		else 
		{
			space++;
		}
	}
	
	printf("Capital letters in string: %d\n",upper);
	printf("Small letters in string: %d\n",small);
	printf("White space letters in string: %d\n",space);
	
	puts(str); 
	return 0;
}
