#include <stdio.h>

int integerPower(int a, int b) {
    int result = 1;

    for (int i = 1; i <= b; i++) {
        result *= a;
    }
    return result;
}

int main(void) {
    printf("3⁴ = %d\n", integerPower(3, 4));

    return 0;
}