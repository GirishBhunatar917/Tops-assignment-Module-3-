#include <stdio.h>

int main() {
    int n = 10;
    int matrix[n][n];

    int num = 1;
    int minRow = 0, minCol = 0;
    int maxRow = n - 1, maxCol = n - 1;

    while (num <= n * n) {
        
        for (int i = minCol; i <= maxCol; i++)
            matrix[minRow][i] = num++;

        minRow++;

        
        for (int i = minRow; i <= maxRow; i++)
            matrix[i][maxCol] = num++;

        maxCol--;


        for (int i = maxCol; i >= minCol; i--)
            matrix[maxRow][i] = num++;

        maxRow--;

        for (int i = maxRow; i >= minRow; i--)
            matrix[i][minCol] = num++;

        minCol++;
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
