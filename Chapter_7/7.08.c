#include <stdio.h>

int main() {
    int matrix[5][5];

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            if (j <= i)
                matrix[i][j] = 1;
            else if (j >= i)
                matrix[i][j] = -1;
            if (i == j)
                matrix[i][j] = 0;
        }

    printf("Generated 5x5 matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}