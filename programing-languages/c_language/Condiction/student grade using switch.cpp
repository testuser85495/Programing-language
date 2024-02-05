#include <stdio.h>

int main() {
    // Variables to store marks in three subjects
    float subject1, subject2, subject3;
    char grade;
    float totalMarks;
    float percentage;

    // Taking user input for marks in three subjects
    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);

    // Calculating percentage
    totalMarks = subject1 + subject2 + subject3;
    percentage = (totalMarks / 300) * 100;

    // Displaying percentage
    printf("Percentage: %.2f%%\n", percentage);

    

    // Switch case for assigning grade
    switch ((int)percentage / 10) {
        
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        default:
            grade = 'F';
            break;
    }

    // Displaying grade
    printf("Grade: %c\n", grade);

    return 0;
}

