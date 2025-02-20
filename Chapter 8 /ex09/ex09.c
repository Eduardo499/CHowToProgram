#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int result;

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);

    // Remove o caractere de nova linha
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    result = strcmp(s1, s2);

    if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else if (result > 0) {
        printf("The first string is greater than the second string.\n");
    } else {
        printf("The strings are equal.\n");
    }

    return 0;
}
