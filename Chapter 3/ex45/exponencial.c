#include <stdio.h>

double exponencial(int x, int terms) {
    double ex = 1.0;
    double numerator = 1.0;  
    double denominator = 1.0;

    for (int i = 1; i < terms; i++) {
        numerator *= x;     
        denominator *= i;   
        ex += numerator / denominator;
    }

    return ex;
}

int main(void) {
    int x, terms;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("e^%d = %.10lf\n", x, exponencial(x, terms));

    return 0;
}
