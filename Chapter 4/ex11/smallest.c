#include <stdio.h>

int main(void) {
    int terms, number, smallest;

    printf("Enter the number of integers followed by the numbers separated by space: ");
    scanf("%d", &terms);

    scanf("%d", &smallest);

    for (int count = 1; count < terms; count++) {
        scanf("%d", &number);
        if (number < smallest)
            smallest = number;
    }

    printf("The smallest number is %d\n", smallest);

    return 0;
}
