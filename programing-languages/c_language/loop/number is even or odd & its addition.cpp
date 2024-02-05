////take 10 numbers from user and find
////how many even numbers are there
////how many odd numbers 
////
////sum of all even numbers
////sum of all odd numbers 
//


#include <stdio.h>

int main() {
    // Declare variables
    int numbers[10];
    int evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;

    // Get 10 numbers input from the user
    for (int i = 0; i < 10; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Check if each number is even or odd, and calculate the sums
    for (int i = 0; i < 10; ++i) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
            evenSum += numbers[i];
        } else {
            oddCount++;
            oddSum += numbers[i];
        }
    }

    // Display results
    printf("\nResults:\n");
    printf("Even numbers count: %d\n", evenCount);
    printf("Odd numbers count: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}

