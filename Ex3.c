#include <stdio.h>

void insertionSortDecrescente(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[10] = {5, 2, 8, 1, 9, 3, 7, 4, 6, 0};
    int n = 10;

    insertionSortDecrescente(arr, n);

    printf("Array ordenado em ordem decrescente: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
