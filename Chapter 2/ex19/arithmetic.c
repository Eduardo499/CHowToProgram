#include <stdio.h>

int main(void) {
    int number1, number2, number3;
    int sum, product, smallest, largest;
    float average; 

    printf("Enter three integers separeted by space: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    sum = number1 + number2 + number3;
    average = sum / 3.0;
    product = number1 * number2 * number3;

    smallest = number1;
    if (number2 < smallest) {
        smallest = number2;
    }
    if (number3 < smallest) {
        smallest = number3;
    }

    largest = number1;
    if (number2 > largest) {
        largest = number2;
    }
    if (number3 > largest) {
        largest = number3;
    }

    printf("Sum is %d\n", sum);
    printf("Average is %.2f\n", average);
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);
}