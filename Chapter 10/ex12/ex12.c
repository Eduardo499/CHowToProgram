#include <stdio.h>

void printBits(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

unsigned int packCharacters(char c1, char c2, char c3, char c4) {
    unsigned int packed = 0;
    packed = (packed | c1) << 8;
    packed = (packed | c2) << 8;
    packed = (packed | c3) << 8;
    packed = (packed | c4);
    return packed;
}

int main() {
    char c1, c2, c3, c4;
    unsigned int packed;

    printf("Enter four characters: ");
    scanf(" %c %c %c %c", &c1, &c2, &c3, &c4);

    printf("Characters in bits:\n");
    printBits(c1);
    printBits(c2);
    printBits(c3);
    printBits(c4);

    packed = packCharacters(c1, c2, c3, c4);

    printf("Packed integer in bits:\n");
    printBits(packed);

    return 0;
}
