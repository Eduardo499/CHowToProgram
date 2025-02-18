#include <stdio.h>

void printArray(int arr[], int size) {
    if (size == 0) {
        return;
    }

    printf("%d ", arr[0]);

    printArray(arr + 1, size - 1);
}

int main() {
    // Exemplo de array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 

    printArray(arr, size);

    return 0;
}
