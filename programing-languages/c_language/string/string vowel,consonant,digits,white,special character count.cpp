//task 2 : 
//		Take string from user & find 
//		
//		i/p:
//		Enter string : Hello3 World23 !
//		
//		o/p:
//		Vowel Count : 3
//		Consonant Count: 7
//		Digit Count : 3
//		white space : 1
//		special character : 1

#include<stdio.h>
int main()
{
	char str[100];
	int i,vowel=0,Consonant=0,digit=0,white=0,special=0;
	
	printf("Enter string:");
	
	//to get mult strig input
	gets(str);
	
	//for loop : to find null character in string
	for(i=0;i<=str[i]!='\0';i++)
	{
		//codition: vowel check
		if(str[i] =='A' || str[i] =='a' || str[i] =='E' || str[i] =='e' || str[i] =='I' ||str[i] =='i' || str[i] =='O' || str[i] =='o' || str[i] =='U' || str[i] =='u')
		{
			vowel++;
		}
		//codition: Consonant check
		else if (str[i] >='a' ||str[i] <='z' && str[i] >='A' || str[i] >='Z')
		{
			Consonant++;
		}
		//codition: white space check
		else if(str[i] ==' ')
		{
			white++;
		}
		//codition: digit check
		else if(str[i] >= '0' && str[i] <='9')
		{
			digit++;
		}
		//codition: special character check
		else
		{
			special++;
		}
	}
	printf("vowel in string: %d\n",vowel);
	printf("Consonant in string: %d\n",Consonant);
	printf("digit in string: %d\n",digit);
	printf("white space in string: %d\n",white);
	printf("special Character in string: %d\n",special);
	
	//to print mult line string
	puts(str);
	return 0;
}
