#include <stdio.h>

int main() {
    int n;

    // Prompt user for input
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Odd numbers up to %d:\n", n);

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        // Check if the number is odd
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}