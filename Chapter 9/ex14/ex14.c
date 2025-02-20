#include <stdio.h>

int main() {
    double num1, num2, num3;

    printf("Enter the value 1.2345 three times (e, f, g):\n");
    scanf("%le %lf %lg", &num1, &num2, &num3);

    printf("\nValues entered:\n");
    printf("Using %%e: %e\n", num1);
    printf("Using %%f: %f\n", num2);
    printf("Using %%g: %g\n", num3);

    return 0;
}
