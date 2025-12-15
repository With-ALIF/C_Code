#include <stdio.h>

int generatePascalsTriangle(int n, int arr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }
    return 1; // Indicating success
}

int main() {
    int n = 5;
    int arr[n][n];

    generatePascalsTriangle(n, arr);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}