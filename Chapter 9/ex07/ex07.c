#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two integers separated by a space (e.g., 10 -10 or 010 0x10): ");
    scanf("%i%d", &x, &y);

    printf("Result: %d %d\n", x, y);

    return 0;
}
