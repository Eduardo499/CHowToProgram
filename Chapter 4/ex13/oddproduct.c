#include <stdio.h>

int main(void) {
    int product = 1;

    for (int i = 1; i <= 15; i += 2) {
        product *= i;
    }

    printf("Product is %d\n", product);

    return 0;
}