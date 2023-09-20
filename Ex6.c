#include <stdio.h>

typedef struct {
    int row;
    int col;
} Position;

Position procurarValor(int arr[][3], int rows, int cols, int target) {
    Position result = {-1, -1};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                result.row = i;
                result.col = j;
                return result;
            }
        }
    }

    return result;
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
    int target;

    printf("Digite o valor que deseja procurar: ");
    scanf("%d", &target);

    Position result = procurarValor(matrix, rows, cols, target);

    if (result.row != -1 && result.col != -1) {
        printf("Valor encontrado na posicao (%d, %d)\n", result.row, result.col);
    } else {
        printf("Valor não encontrado na matriz.\n");
    }

    return 0;
}
