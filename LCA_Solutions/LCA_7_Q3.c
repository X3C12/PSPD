#include <stdio.h>

int main() {
    int number;

    // Prompt user for input
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    // Print multiplication table from 1 to 10
    printf("Multiplication table of %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}