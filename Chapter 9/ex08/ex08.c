#include <stdio.h>

int main() {
    int intValue = 12345;
    float floatValue = 1.2345;

    printf("Default width:\n");
    printf("%d\n", intValue);
    printf("%f\n", floatValue);

    printf("\nWider fields:\n");
    printf("%10d\n", intValue);    
    printf("%10.4f\n", floatValue); 

    printf("\nSmaller fields:\n");
    printf("%4d\n", intValue);
    printf("%4.2f\n", floatValue);

    return 0;
}
