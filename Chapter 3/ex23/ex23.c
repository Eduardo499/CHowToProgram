#include <stdio.h>

int main() {
    int counter = 0;
    float number, largest = 0; // Assume numbers are non-negative

    while (counter < 10) {
        printf("Enter a non-negative number: ");
        scanf("%f", &number);

        // Ensure the number is non-negative
        if (number < 0) {
            printf("Only non-negative numbers are allowed. Try again.\n");
            continue;
        }

        // Check if this number is the largest so far
        if (number > largest) {
            largest = number;
        }

        counter++; // Increment counter only if valid input
    }

    // Print the largest number
    printf("The largest number is: %.2f\n", largest);

    return 0;
}
