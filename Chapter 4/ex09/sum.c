#include <stdio.h>

int main(void) {
    int terms, number;
    int count = 0;
    int sum = 0;

    printf("Enter the number of integers followed by the numbers separated by space: ");
    scanf("%d", &terms);

    while (count < terms) {
        scanf(" %d", &number);
        sum += number;
        count++;
    }

    printf("Sum is %d\n", sum);

    return 0;
}