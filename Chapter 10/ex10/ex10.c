#include <stdio.h>

void printBits(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter an integer: ");
    scanf("%u", &num);

    printf("Before shift: ");
    printBits(num);

    num >>= 4;

    printf("After shift: ");
    printBits(num);

    return 0;
}
