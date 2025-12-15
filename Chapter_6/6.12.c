#include <stdio.h>

int main() {
    int rows = 15, cols = 18;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i == 0 || i == 1) ||
                (i == 7 || i == 8) ||
                (i == 13 || i == 14) ||
                (j == 0 && i < 7) ||
                (j == cols - 1 && i > 8))
            {
                printf("*");
            }
            else {
                printf(" ");

            }
        }
        printf("\n");
    }

    return 0;
}
