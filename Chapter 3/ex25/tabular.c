#include <stdio.h>

int main(void) {
    printf("A\tA+2\tA+4\tA+6\n");
    printf("\n");

    for (int i = 1; i <= 15; i++) {
        if (i % 3 == 0)
            printf("%d\t%d\t%d\t%d\n", i, (i + 2), (i + 4), (i + 6));
    }
    return 0;
}