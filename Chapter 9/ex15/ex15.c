#include <stdio.h>

int main() {
    char s1[20], s2[20], s3[20];

    printf("Enter strings: suzy, \"suzy\", and 'suzy':\n");
    scanf("%s %s %s", s1, s2, s3);

    printf("\nResults:\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("s3: %s\n", s3);

    return 0;
}
