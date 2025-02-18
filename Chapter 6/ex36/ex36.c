#include <stdio.h>

void stringReverse(const char *str) {
    if (*str == '\0') {
        return;
    }

    stringReverse(str + 1);

    printf("%c", *str);
}

int main() {
    const char *str = "Hello, World!";

    stringReverse(str);
    printf("\n");

    return 0;
}
