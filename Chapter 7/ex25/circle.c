#include <stdio.h>

#define PI 3.14159

double circle_circumference(double radius);
double circle_area(double radius);
double sphere_volume(double radius);
double sphere_area(double radius);

int main(void) {
    double (*functions[4])(double) = {circle_circumference, circle_area, sphere_volume, sphere_area};

    int choice;
    double radius;

    printf("Enter a choice:\n");
    printf("1. Circle Circumference\n");
    printf("2. Circe Area\n");
    printf("3. Sphere Volume\n");
    printf("4. Sphere Area\n");
    scanf("%d", &choice);

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    if (choice < 1 || choice > 4) {
        printf("Invalid choice\n");
        return 1;
    }

    printf("Result: %.2f\n", functions[choice - 1](radius));

    return 0;
}

double circle_circumference(double radius) {
    return 2 * PI * radius;
}

double circle_area(double radius) {
    return PI * radius * radius;
}

double sphere_volume(double radius) {
    return 4.0 / 3.0 * PI * radius * radius * radius;
}

double sphere_area(double radius) {
    return 4 * PI * radius * radius;
}