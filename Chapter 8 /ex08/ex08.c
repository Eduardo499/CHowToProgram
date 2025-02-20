#include <stdio.h>
#include <stdlib.h>

int main() {
    char s1[20], s2[20], s3[20], s4[20];
    double num1, num2, num3, num4, sum;

    printf("Enter four floating-point values as strings:\n");
    scanf("%s %s %s %s", s1, s2, s3, s4);

    num1 = atof(s1);
    num2 = atof(s2);
    num3 = atof(s3);
    num4 = atof(s4);

    sum = num1 + num2 + num3 + num4;

    printf("The sum of the values is: %.2f\n", sum);

    return 0;
}
