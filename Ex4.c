#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[][3], int low, int high) {
    int pivot = arr[high][0];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j][0] > pivot) {
            i++;
            for (int k = 0; k < 3; k++) {
                swap(&arr[i][k], &arr[j][k]);
            }
        }
    }

    for (int k = 0; k < 3; k++) {
        swap(&arr[i + 1][k], &arr[high][k]);
    }

    return (i + 1);
}

void quicksort(int arr[][3], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int matrix[][3] = {
        {12, 9, 5},
        {3, 15, 7},
        {8, 19, 1},
        {10, 2, 4}
    };

    int rows = 4;
    int cols = 3;

    quicksort(matrix, 0, rows - 1);

    printf("\nMatriz ordenada:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
