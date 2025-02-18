#include <stdio.h>
#include <math.h>

double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

int main(void) {
    printf("Side 1: 3.0; Side2: 4.0; Hypotenuse: %.2f\n", hypotenuse(3, 4));
    return 0;
}