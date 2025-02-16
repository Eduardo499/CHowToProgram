#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("Enter the first integer: ");
    scanf("%d", &n1);

    printf("Enter the second integer: ");
    scanf("%d", &n2);

    if (n1 % n2 == 0) {
        printf("The first number is multiple of the second.\n");
    }

    return 0;
}