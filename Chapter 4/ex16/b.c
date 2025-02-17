#include <stdio.h>

int main(void) {
    int count = 10;

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= count; j++) {
            printf("*");
        }
        printf("\n");
        count--;
    }

    return 0;
}