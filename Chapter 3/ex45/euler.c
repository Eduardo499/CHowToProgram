#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double euler(int terms) {
    double e = 0.0;

    for(int i = 0; i < terms; i++) {
        e += 1.0 / factorial(i);
    }

    return e;

}

int main(void) {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("e = %.10lf\n", euler(terms));

    return 0;
}
