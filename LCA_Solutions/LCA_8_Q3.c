#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;  // Using unsigned long long to handle large results

    // Prompt user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the user entered a negative number
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= n; i++) {
            factorial *= i;  // Multiply factorial by the current number
        }
        // Output the result
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}