#include <stdio.h>

void printSolidSquare() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("S");
        }
        printf("\n");
    }
}

int main() {
    printSolidSquare();
    return 0;
}
