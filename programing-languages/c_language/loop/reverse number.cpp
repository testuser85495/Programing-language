#include <stdio.h>

int main() 
{
    int number,digit;
    int reversedNumber = 0;
	
	printf("Enter num:");
	scanf("%d",&number);
	
    // Reverse the number
    while (number > 0) 
	{
        digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}

