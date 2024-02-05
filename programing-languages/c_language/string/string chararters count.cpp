//take string from user and find

//string count         white space count


#include<stdio.h>

int main()
{
	char str[100];
	int i,string=0,white=0;
	
	printf("Enter string:");
	
	//to get mult strig input
	gets(str);
	//to print mult line string
	puts(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i] !=' ')
		{
			string++;
		}
		else 
		{
			white++;
		}
		
	
	}
	printf("your string %d\n",string);
	printf("your white space %d\n",white);
	//printf("your symbol is %d\n",symbol);
}
