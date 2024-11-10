#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pattern

    // Outer loop for each row, starting from rows down to 1
    for (int i = rows; i >= 1; i--) {
        // Inner loop for printing asterisks in each row
        for (int j = 1; j <= i; j++) {
            printf("* "); // Print an asterisk followed by a space
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}