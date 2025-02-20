#include <stdio.h>
#include <math.h>

int main() {
    double num = 100.453627;

    printf("Original: %.6f\n", num);
    printf("Rounded to nearest digit: %.0f\n", round(num));
    printf("Rounded to nearest tenth: %.1f\n", round(num * 10) / 10);
    printf("Rounded to nearest hundredth: %.2f\n", round(num * 100) / 100);
    printf("Rounded to nearest thousandth: %.3f\n", round(num * 1000) / 1000);
    printf("Rounded to nearest ten-thousandth: %.4f\n", round(num * 10000) / 10000);

    return 0;
}