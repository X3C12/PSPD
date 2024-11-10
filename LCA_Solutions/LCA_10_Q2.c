#include <stdio.h>

int main() {
    int n = 5; // Number of rows

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = i; j < n; j++) {
            printf("  "); // Two spaces for better alignment
        }
        
        // Print numbers in the current row
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}