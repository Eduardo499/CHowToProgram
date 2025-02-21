#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "hardware.dat"
#define TOTAL_RECORDS 100

typedef struct {
    int record_number;
    char name[30];
    int quantity;
    float cost;
} Tool;

void initializeFile() {
    FILE *file = fopen(FILE_NAME, "wb");
    Tool emptyTool = {0, "", 0, 0.0};
    for (int i = 0; i < TOTAL_RECORDS; i++) {
        fwrite(&emptyTool, sizeof(Tool), 1, file);
    }
    fclose(file);
}

void addTool() {
    FILE *file = fopen(FILE_NAME, "r+b");
    Tool tool;
    printf("Enter record number (1-100): ");
    scanf("%d", &tool.record_number);
    if (tool.record_number < 1 || tool.record_number > TOTAL_RECORDS) {
        printf("Invalid record number!\n");
        return;
    }
    printf("Enter tool name: ");
    scanf("%s", tool.name);
    printf("Enter quantity: ");
    scanf("%d", &tool.quantity);
    printf("Enter cost: ");
    scanf("%f", &tool.cost);
    fseek(file, (tool.record_number - 1) * sizeof(Tool), SEEK_SET);
    fwrite(&tool, sizeof(Tool), 1, file);
    fclose(file);
}

void listTools() {
    FILE *file = fopen(FILE_NAME, "rb");
    Tool tool;
    printf("%-5s%-20s%-10s%-10s\n", "ID", "Name", "Quantity", "Cost");
    for (int i = 0; i < TOTAL_RECORDS; i++) {
        fread(&tool, sizeof(Tool), 1, file);
        if (tool.record_number != 0) {
            printf("%-5d%-20s%-10d%-10.2f\n", tool.record_number, tool.name, tool.quantity, tool.cost);
        }
    }
    fclose(file);
}

void deleteTool() {
    FILE *file = fopen(FILE_NAME, "r+b");
    int record_number;
    printf("Enter record number to delete: ");
    scanf("%d", &record_number);
    if (record_number < 1 || record_number > TOTAL_RECORDS) {
        printf("Invalid record number!\n");
        return;
    }
    Tool emptyTool = {0, "", 0, 0.0};
    fseek(file, (record_number - 1) * sizeof(Tool), SEEK_SET);
    fwrite(&emptyTool, sizeof(Tool), 1, file);
    fclose(file);
}

void updateTool() {
    printf("Update tool function (similar to addTool)\n");
}

void menu() {
    int choice;
    do {
        printf("\n1. Initialize File\n2. Add Tool\n3. List Tools\n4. Delete Tool\n5. Update Tool\n6. Exit\nChoose an option: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: initializeFile(); break;
            case 2: addTool(); break;
            case 3: listTools(); break;
            case 4: deleteTool(); break;
            case 5: updateTool(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 6);
}

int main() {
    menu();
    return 0;
}
