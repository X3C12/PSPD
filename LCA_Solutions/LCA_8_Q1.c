#include <stdio.h>

int main() {
    printf("Even numbers between 10 and 20:\n");

    // Loop through numbers from 10 to 20
    for (int i = 10; i <= 20; i++) {
        // Check if the number is even
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}