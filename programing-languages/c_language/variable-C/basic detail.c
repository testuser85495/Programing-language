/*# = It is PreDefine  
Include = use to include lib
<stdio.h> = Standard Input Output
int main = program start with main function always
printf = use to print something on screen
return 0 = end of program*/



#include<stdio.h>
int main()
{
	
	// all are dynamic variable
	//char name[50];
    char name[50]; 
	char gender[8];
	char email[50];
	char address[100];  
	int  age,number; 
	float height;
	float weight;
	
	printf("Enter Your name :");   //printf: use to display text on screen
	scanf("%s",&name);             //scanf: use to take input from user 
									 
	
	printf("Enter Your Age :");
	scanf("%d",&age);
	
	printf("Enter Your mobile number :");
	scanf("%d",&number);
	
	printf("Enter Your Gender :" );
	scanf("%s",&gender);
	
	printf("Enter Your Email :");
	
	scanf("%s",&email);
	
	printf("Enter Your height :");
	scanf("%f",&height);
	
	printf("Enter Your Weight :");
	scanf("%f",&weight);
	
	printf("Enter Your Address :");
	scanf("%s",&address);
	

	
	
	
	printf("\n Your Name : %s \n ",name);
	printf("Your Age :%d \n",age);
	printf("Your mobile number :%d \n",number);
	printf("Your Gender : %s \n",gender);
	printf("Your email : %s \n",email);
	printf("Your Height : %.2f \n",height);
	printf("Your Weight : %.2f \n",weight);
	printf("Your Address :%s \n",address);
	
	
	return 0;
}
