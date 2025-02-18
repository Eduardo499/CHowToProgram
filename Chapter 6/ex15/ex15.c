#include <stdio.h>

int main(void) {
    int numbers[91] = {0}; 
    int num;

    printf("Enter 20 numbers (between 10 and 100):\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &num);

        if (num >= 10 && num <= 100) {
            if (numbers[num - 10] == 0) {
                numbers[num - 10] = 1;
                printf("%d\n", num);
            }
        } else {
            printf("Invalid input, please enter a number between 10 and 100.\n");
            i--;  
        }
    }

    return 0;
}
