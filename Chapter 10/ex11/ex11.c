#include <stdio.h>

void printBits(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

unsigned int power2(unsigned int number, unsigned int pow) {
    return number << pow;
}

int main() {
    unsigned int number, pow, result;

    printf("Enter a number and a power: ");
    scanf("%u %u", &number, &pow);

    result = power2(number, pow);

    printf("Number in bits: ");
    printBits(number);

    printf("Result in bits: ");
    printBits(result);

    printf("Result as integer: %u\n", result);

    return 0;
}
