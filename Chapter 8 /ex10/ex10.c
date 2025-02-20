#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int n, result;

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);

    printf("Enter the number of characters to compare: ");
    scanf("%d", &n);

    // Remove o caractere de nova linha
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    result = strncmp(s1, s2, n);

    if (result < 0) {
        printf("The first string is less than the second string in the first %d characters.\n", n);
    } else if (result > 0) {
        printf("The first string is greater than the second string in the first %d characters.\n", n);
    } else {
        printf("The strings are equal in the first %d characters.\n", n);
    }

    return 0;
}
