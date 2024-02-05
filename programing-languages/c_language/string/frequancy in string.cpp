//task : 3: find character frequancy in a string 
//		
//		Enter string : hello 
//		Enter Character : l
//		
//		o/p:
//		frequanceee of character 'l' is : 2

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100],ch;
	int i,frequancee=0;
	
	printf("Enter a string:");
	gets(str);
	printf("Enter a character:");
	scanf("%c",&ch);
	
	for(i=0;str[i] !='\0';i++)
	{
		if(str[i] == ch)
		{
			frequancee++;
		}
	}
	printf("Frequency of %c is: %d\n", ch, frequancee);
	puts(str);
	return 0;
}
