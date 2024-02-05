//take alphabet from user and find is it vowel or consopnant

#include <stdio.h>

int main() {
    char ch;

    // Input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert to lowercase to handle both uppercase and lowercase letters
    //ch = tolower(ch);

    // Check if the input is a vowel or a consonant using a switch statement
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("%c is not a valid alphabet character.\n", ch);
            }
    }

    return 0;
}
