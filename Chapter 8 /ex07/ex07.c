#include <stdio.h>
#include <stdlib.h>

int main() {
    char s1[20], s2[20], s3[20], s4[20];
    int num1, num2, num3, num4, sum;

    printf("Enter four integers as strings:\n");
    scanf("%s %s %s %s", s1, s2, s3, s4);

    num1 = atoi(s1);
    num2 = atoi(s2);
    num3 = atoi(s3);
    num4 = atoi(s4);

    sum = num1 + num2 + num3 + num4;

    printf("The sum of the values is: %d\n", sum);

    return 0;
}
