#include <stdio.h>

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main(void) {
    double (*functions[4])(double, double) = {add, subtract, multiply, divide};

    int choice;
    double x, y;

    printf("Enter a choice:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);

    if (choice < 1 || choice > 4) {
        printf("Invalid choice\n");
        return 1;
    }

    printf("Result: %.2f\n", functions[choice - 1](x, y));

    return 0;
}

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    return x / y;
}