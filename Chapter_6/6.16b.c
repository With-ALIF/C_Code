#include <stdio.h>

void printHollowSquare() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || i == 4 || j == 0 || j == 4) {
                printf("S");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    printHollowSquare();
    return 0;
}
