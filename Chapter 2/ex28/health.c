#include <stdio.h>

int main() {
    int age;
    int maxHeartRate;
    float lowerTargetRate, upperTargetRate;

    printf("Enter your age: ");
    scanf("%d", &age);

    maxHeartRate = 220 - age;

    lowerTargetRate = maxHeartRate * 0.50;
    upperTargetRate = maxHeartRate * 0.85;

    printf("Your maximum heart rate is: %d bpm\n", maxHeartRate);
    printf("Your target heart rate is: %.2f - %.2f bpm\n", lowerTargetRate, upperTargetRate);

    return 0;
}
