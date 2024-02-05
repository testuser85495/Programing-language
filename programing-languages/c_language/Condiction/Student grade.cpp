//take user input for 3 subjects from user
//find percentage of the student
//
//based on percentage assign GRADE to the student

#include<stdio.h>

int main()
{
	int eng,maths,science;
	float total,per;
	
	//USER INPUT FOR SUBJECT
	printf("Enter your English marks :");
	scanf("%d",&eng);
	
	printf("Enter our Maths marks :");
	scanf("%d",&maths);
	
	printf("Enter your Science marks :");
	scanf("%d",&science);
	
	//TOTAL OF STUDENT MAEKS 
	total=eng+maths+science;
	//FORMULA OF PERCENTAGE
	per=(total/300)*100;
	
	printf("The percentage of three subject is : %.3f \n", per);
	
	//CONDICTION WAS APPLY ON PERCENTAGE 
	// & STUDENT GRAED WILL got his/her grade
	 
	if(per >= 80)
	{
		printf("Excellent you got A grade");
	}
	else if(per >=35)
	{
		printf("good you got B grade");
		
	}
	else 
	{
		printf("sorry you got C grade");
	}
	return 0;
}
