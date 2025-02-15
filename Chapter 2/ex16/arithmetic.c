#include <stdio.h>

int main(void) {
    int number1 = 0;
    int number2 = 0;

    printf("Enter the first integer: ");
    scanf("%d", &number1);

    printf("Enter the second integer: ");
    scanf("%d", &number2);

    int sum = number1 + number2;
    int difference = number1 - number2;
    int product = number1 * number2;
    int quotient = number1 / number2;
    int remainder = number1 % number2;

    printf("%d + %d = %d\n", number1, number2, sum);
    printf("%d - %d = %d\n", number1, number2, difference);
    printf("%d X %d = %d\n", number1, number2, product);
    printf("%d / %d = %d\n", number1, number2, quotient);
    printf("%d mod %d = %d\n", number1, number2, remainder);
}