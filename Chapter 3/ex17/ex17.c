#include <stdio.h>

int main() {
    int accountNumber;
    float beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    // Process multiple accounts
    while (1) {
        printf("Enter account number (-1 to end): ");
        scanf("%d", &accountNumber);

        // Check for termination condition
        if (accountNumber == -1) {
            break;
        }

        // Input data for the account
        printf("Enter beginning balance: ");
        scanf("%f", &beginningBalance);
        
        printf("Enter total charges: ");
        scanf("%f", &totalCharges);
        
        printf("Enter total credits: ");
        scanf("%f", &totalCredits);
        
        printf("Enter credit limit: ");
        scanf("%f", &creditLimit);

        // Calculate new balance
        newBalance = beginningBalance + totalCharges - totalCredits;

        // Display account details
        printf("\nAccount: %d\n", accountNumber);
        printf("Credit limit: %.2f\n", creditLimit);
        printf("Balance: %.2f\n", newBalance);

        // Check if credit limit is exceeded
        if (newBalance > creditLimit) {
            printf("Credit Limit Exceeded.\n");
        }

        printf("\n"); // Add space for readability
    }

    return 0;
}
