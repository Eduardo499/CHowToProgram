#include <stdio.h>

int main(void) {
    int n1, n2, n3;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    printf("Enter the third number: ");
    scanf("%d", &n3);

    if(n1 < n2 && n1 < n3) {
        if(n2 < n3) {
            printf("%d %d %d\n", n1, n2, n3);
        } else {
            printf("%d %d %d\n", n1, n3, n2);
        }
    } else if(n2 < n1 && n2 < n3) {
        if(n1 < n3) {
            printf("%d %d %d\n", n2, n1, n3);
        } else {
            printf("%d %d %d\n", n2, n3, n1);
        }
    } else {
        if(n1 < n2) {
            printf("%d %d %d\n", n3, n1, n2);
        } else {
            printf("%d %d %d\n", n3, n2, n1);
        }
    }
    
    return 0;
}