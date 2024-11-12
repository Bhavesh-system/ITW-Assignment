#include <stdio.h>
#include<stdlib.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 31, 3, 2, 600};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
