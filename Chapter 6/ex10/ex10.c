#include <stdio.h>

int main(void) {
    int numSalespeople;
    
    printf("Enter the number of salespeople: ");
    scanf("%d", &numSalespeople);

    int salaryRanges[9] = {0}; 

    for (int i = 0; i < numSalespeople; i++) {
        double sales, salary;

        printf("Enter the sales for salesperson %d: $", i + 1);
        scanf("%lf", &sales);

        salary = 200 + 0.09 * sales;

        int salaryInt = (int)salary;

        if (salaryInt >= 200 && salaryInt <= 299) {
            salaryRanges[0]++;
        } else if (salaryInt >= 300 && salaryInt <= 399) {
            salaryRanges[1]++;
        } else if (salaryInt >= 400 && salaryInt <= 499) {
            salaryRanges[2]++;
        } else if (salaryInt >= 500 && salaryInt <= 599) {
            salaryRanges[3]++;
        } else if (salaryInt >= 600 && salaryInt <= 699) {
            salaryRanges[4]++;
        } else if (salaryInt >= 700 && salaryInt <= 799) {
            salaryRanges[5]++;
        } else if (salaryInt >= 800 && salaryInt <= 899) {
            salaryRanges[6]++;
        } else if (salaryInt >= 900 && salaryInt <= 999) {
            salaryRanges[7]++;
        } else if (salaryInt >= 1000) {
            salaryRanges[8]++;
        }
    }

    printf("\nSalary Range\t\tSalespeople Count\n");
    printf("$200 - $299\t\t%d\n", salaryRanges[0]);
    printf("$300 - $399\t\t%d\n", salaryRanges[1]);
    printf("$400 - $499\t\t%d\n", salaryRanges[2]);
    printf("$500 - $599\t\t%d\n", salaryRanges[3]);
    printf("$600 - $699\t\t%d\n", salaryRanges[4]);
    printf("$700 - $799\t\t%d\n", salaryRanges[5]);
    printf("$800 - $899\t\t%d\n", salaryRanges[6]);
    printf("$900 - $999\t\t%d\n", salaryRanges[7]);
    printf("$1000 and over\t\t%d\n", salaryRanges[8]);

    return 0;
}
