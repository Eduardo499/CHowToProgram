#include <stdio.h>

int main() {
    int d, i, o, u, x;

    printf("Enter 437 using different formats:\n");
    
    printf("As decimal (%%d): ");
    scanf("%d", &d);
    
    printf("As integer (%%i): ");
    scanf("%i", &i);
    
    printf("As octal (%%o): ");
    scanf("%o", &o);
    
    printf("As unsigned (%%u): ");
    scanf("%u", &u);
    
    printf("As hexadecimal (%%x): ");
    scanf("%x", &x);

    printf("\nResults:\n");
    printf("d = %d, i = %d, o = %d, u = %u, x = %d\n", d, i, o, u, x);

    return 0;
}
