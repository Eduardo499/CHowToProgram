#include <stdio.h>

unsigned long long int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    unsigned long long int a = 0, b = 1, temp;

    for(int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main(void) {
    int n = 10;

    printf("Fibonacci(%d) = %llu\n", n, fibonacci(n));
    return 0;
}
