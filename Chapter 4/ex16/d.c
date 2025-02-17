#include <stdio.h>

int main(void) {
    int count = 1;

    for (int i = 1; i <= 10; i++) {
        for (int s = 0; s < 10 - count; s++) {
            printf(" ");
        }

        for (int j = 1; j <= count; j++) {
            printf("*");
        }
        printf("\n");
        count++;
    }

    return 0;
}