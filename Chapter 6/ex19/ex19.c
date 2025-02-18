#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int rolls[13] = {0};
    int numRolls = 3600000; 

    srand(time(NULL));

    for (int i = 0; i < numRolls; i++) {
        int die1 = rand() % 6 + 1; 
        int die2 = rand() % 6 + 1; 

        int sum = die1 + die2; 
        rolls[sum]++;  
    }

    printf("Sum\tFrequency\tPercentage\n");
    for (int sum = 2; sum <= 12; sum++) {
        double percentage = (double)rolls[sum] / numRolls * 100;
        printf("%d\t%d\t\t%.2f%%\n", sum, rolls[sum], percentage);
    }

    printf("\nExpected frequency for sum of 7: %.2f%%\n", (1.0 / 6) * 100);

    return 0;
}
