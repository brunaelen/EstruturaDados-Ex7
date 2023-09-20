#include <stdio.h>

void insertionSort(int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            int key = arr[i][j];
            int k = j - 1;

            while (k >= 0 && arr[i][k] < key) {
                arr[i][k + 1] = arr[i][k];
                k = k - 1;
            }

            arr[i][k + 1] = key;
        }
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

    insertionSort(matrix, rows, cols);

    printf("\nMatriz ordenada:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
