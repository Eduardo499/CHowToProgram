#include <stdio.h>

union floatingPoint {
    float f;
    double d;
    long double x;
};

int main() {
    union floatingPoint u;

    printf("Enter a float: ");
    scanf("%f", &u.f);
    printf("As float: %f, as double: %f, as long double: %Lf\n", u.f, u.d, u.x);

    printf("Enter a double: ");
    scanf("%lf", &u.d);
    printf("As float: %f, as double: %f, as long double: %Lf\n", u.f, u.d, u.x);

    printf("Enter a long double: ");
    scanf("%Lf", &u.x);
    printf("As float: %f, as double: %f, as long double: %Lf\n", u.f, u.d, u.x);

    return 0;
}
