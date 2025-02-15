#include <stdio.h>

int main(void) {
    double radius;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    double diameter = 2 * radius;
    double circumference = 2 * 3.14159 * radius;
    double area = 3.14159 * radius * radius;

    printf("Diameter is %.2f\n", diameter);
    printf("Circumference is %.2f\n", circumference);
    printf("Area is %.2f\n", area);

    return 0;
}