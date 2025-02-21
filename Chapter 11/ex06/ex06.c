#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for the master file
typedef struct {
    int accountNumber;
    char name[30];
    double balance;
} MasterRecord;

// Structure for the transaction file
typedef struct {
    int accountNumber;
    double transactionAmount;
} TransactionRecord;

// Function to create test files
void createTestFiles() {
    // Data for the master file
    MasterRecord masterData[] = {
        {100, "Alan Jones", 348.17},
        {300, "Mary Smith", 27.19},
        {500, "Sam Sharp", 0.00},
        {700, "Suzy Green", -14.22}
    };

    // Data for the transaction file
    TransactionRecord transactionData[] = {
        {100, 27.14},
        {300, 62.11},
        {400, 100.56},
        {900, 82.17}
    };

    // Create and write to the master file
    FILE *masterFile = fopen("oldmast.dat", "w");
    for (int i = 0; i < 4; i++) {
        fprintf(masterFile, "%d %s %.2f\n", masterData[i].accountNumber, masterData[i].name, masterData[i].balance);
    }
    fclose(masterFile);

    // Create and write to the transaction file
    FILE *transactionFile = fopen("trans.dat", "w");
    for (int i = 0; i < 4; i++) {
        fprintf(transactionFile, "%d %.2f\n", transactionData[i].accountNumber, transactionData[i].transactionAmount);
    }
    fclose(transactionFile);
}

// Function to match files and generate the new master file
void matchFiles() {
    FILE *masterFile = fopen("oldmast.dat", "r");
    FILE *transactionFile = fopen("trans.dat", "r");
    FILE *newMasterFile = fopen("newmast.dat", "w");

    MasterRecord master;
    TransactionRecord transaction;
    int transactionAvailable = fscanf(transactionFile, "%d %lf", &transaction.accountNumber, &transaction.transactionAmount);

    while (fscanf(masterFile, "%d %s %lf", &master.accountNumber, master.name, &master.balance) != EOF) {
        while (transactionAvailable != EOF && transaction.accountNumber < master.accountNumber) {
            printf("Unmatched transaction record for account number %d\n", transaction.accountNumber);
            transactionAvailable = fscanf(transactionFile, "%d %lf", &transaction.accountNumber, &transaction.transactionAmount);
        }

        if (transactionAvailable != EOF && transaction.accountNumber == master.accountNumber) {
            master.balance += transaction.transactionAmount;
            transactionAvailable = fscanf(transactionFile, "%d %lf", &transaction.accountNumber, &transaction.transactionAmount);
        }

        fprintf(newMasterFile, "%d %s %.2f\n", master.accountNumber, master.name, master.balance);
    }

    while (transactionAvailable != EOF) {
        printf("Unmatched transaction record for account number %d\n", transaction.accountNumber);
        transactionAvailable = fscanf(transactionFile, "%d %lf", &transaction.accountNumber, &transaction.transactionAmount);
    }

    fclose(masterFile);
    fclose(transactionFile);
    fclose(newMasterFile);
}

int main() {
    createTestFiles();
    matchFiles();
    printf("File matching process completed.\n");
    return 0;
}
