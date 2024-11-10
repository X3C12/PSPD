#include <stdio.h>

int main() {
    char i;
    
    printf("Enter character: ");
    scanf("%c", &i);
    
    // Check if the character is a vowel
    if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
        i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') {
        printf("The character : %c : is a vowel\n", i);
    } else {
        printf("The character : %c : is not a vowel\n", i);
    }

    return 0;
}