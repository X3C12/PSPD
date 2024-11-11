#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    while (number > 0) {
        digit = number % 10; // Get the last digit
        sum += digit;        // Add it to the sum
        number /= 10;        // Remove the last digit
    }

    // Output the result
    printf("Sum of the digits: %d\n", sum);

    return 0;
}