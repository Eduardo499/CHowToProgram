#include <stdio.h>

double calculateCharges(double hours) {
    double charge = 2.0; 
    if (hours > 3.0) {
        charge += (hours - 3.0) * 0.50;
    }
    return (charge > 10.0) ? 10.0 : charge; 
}

int main() {
    double hours[3];
    double charges[3];
    double totalReceipts = 0.0;
    
    for (int i = 0; i < 3; i++) {
        printf("Enter the parked hours for the customer %d: ", i + 1);
        scanf("%lf", &hours[i]);
        charges[i] = calculateCharges(hours[i]);
        totalReceipts += charges[i];
    }
    
    printf("\n%-10s %-10s %-10s\n", "Car", "Hours", "Charge");
    printf("--------------------------------\n");
    for (int i = 0; i < 3; i++) {
        printf("%-10d %-10.1f $%-9.2f\n", i + 1, hours[i], charges[i]);
    }
    printf("--------------------------------\n");
    printf("%-10s %-10s $%-9.2f\n", "TOTAL", "", totalReceipts);
    
    return 0;
}
