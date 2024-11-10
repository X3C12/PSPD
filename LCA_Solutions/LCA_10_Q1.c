#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pattern

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces for right alignment
        for (int j = i; j < rows; j++) {
            printf(" "); // Print a single space for alignment
        }
        // Inner loop for printing '1's in each row
        for (int j = 1; j <= i; j++) {
            printf("1 "); // Print '1' followed by a space
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}