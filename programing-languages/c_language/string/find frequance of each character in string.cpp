//task : 4 : find frequance of each character in string 
//	
//		Enter string : Hello World
//		
//		H-1
//		e-1
//		l-3
//		o-2
//		W-1
//		r-1
//		d-1

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int i,j,count=0;
	printf("Enter a string:");
	gets(str);
	
	for(i=0;str[i] !='\0';i++)
	{
		count++;
	}
	
	
	for (int i = 0; i <= str[i]; i++) 
	{
        if (str[i] > 0) 
		{
            printf("%c-%d\n", str[i], count);
        }
    }
	puts(str);
	return 0;
}
