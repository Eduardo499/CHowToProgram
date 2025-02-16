#include <stdio.h>

int main() {
    float gallons, miles, mpg;
    float totalMiles = 0, totalGallons = 0;
    int count = 0;

    while (1) {
        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);

        if (gallons == -1) {
            break;
        }

        printf("Enter the miles driven: ");
        scanf("%f", &miles);

        mpg = miles / gallons;
        printf("The miles/gallon for this tank was %.6f\n", mpg);

        totalMiles += miles;
        totalGallons += gallons;
        count++;
    }

    if (count > 0) {
        float overallMpg = totalMiles / totalGallons;
        printf("The overall average miles/gallon was %.6f\n", overallMpg);
    } else {
        printf("No data to calculate average.\n");
    }

    return 0;
}