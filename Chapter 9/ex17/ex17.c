#include <stdio.h>

int main() {
    double num = 9876.12345;

    for (int precision = 1; precision <= 9; precision++) {
        printf("Precision %d: %.*g\n", precision, precision, num);
    }

    return 0;
}
