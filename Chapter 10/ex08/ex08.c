#include <stdio.h>

union integer {
    char c;
    short s;
    int i;
    long b;
};

int main() {
    union integer u;

    printf("Enter a char: ");
    scanf(" %c", &u.c);
    printf("As char: %c, as short: %hd, as int: %d, as long: %ld\n", u.c, u.s, u.i, u.b);

    printf("Enter a short: ");
    scanf("%hd", &u.s);
    printf("As char: %c, as short: %hd, as int: %d, as long: %ld\n", u.c, u.s, u.i, u.b);

    printf("Enter an int: ");
    scanf("%d", &u.i);
    printf("As char: %c, as short: %hd, as int: %d, as long: %ld\n", u.c, u.s, u.i, u.b);

    printf("Enter a long: ");
    scanf("%ld", &u.b);
    printf("As char: %c, as short: %hd, as int: %d, as long: %ld\n", u.c, u.s, u.i, u.b);

    return 0;
}
