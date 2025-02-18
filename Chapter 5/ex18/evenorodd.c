#include <stdio.h>
#include <stdbool.h>

bool isEven(int number) {
    if (number % 2 == 0) {
        return true;
    }
    return false;
}

bool isOdd(int number) {
    if (number % 2 == 0) {
        return false;
    }
    return true;
}

int main(void) {
    int number = 5;

    if (isEven(number)) {
        printf("%d is Even\n", number);
    }
    else {
        printf("%d is Odd\n", number);
    }

    return 0;
}