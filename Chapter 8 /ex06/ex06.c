#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[100];

    printf("Enter a line of text: ");
    fgets(s, sizeof(s), stdin);

    printf("\nUppercase: ");
    for (int i = 0; s[i] != '\0'; i++) {
        putchar(toupper(s[i]));
    }

    printf("\nLowercase: ");
    for (int i = 0; s[i] != '\0'; i++) {
        putchar(tolower(s[i]));
    }

    return 0;
}
