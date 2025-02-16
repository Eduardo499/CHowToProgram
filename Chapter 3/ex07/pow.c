#include <stdio.h>

int main(void) {
    int x = 0;
    int y = 0;

    printf("Enter the first integer: ");
    scanf("%d", &x);

    printf("Enter the second integer: ");
    scanf("%d", &y);

    int i = 1;
    int power = 1;

    while (i <= y) {
        power *= x;
        i++;
    }

    printf("%d\n", power);

    return 0;
}