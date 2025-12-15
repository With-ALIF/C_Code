#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "123456789";
    int i, j, k, spaces, n = 5;

    // Loop for each row
    for (i = 0; i < n; i++) {
        // Print spaces for center alignment
        for (spaces = 0; spaces < n - i - 1; spaces++) {
            printf("  ");
        }
        
        // Print increasing numbers
        for (j = 0; j <= i; j++) {
            printf("%c ", str[i + j]);
        }
        
        // Print decreasing numbers
        for (k = i - 1; k >= 0; k--) {
            printf("%c ", str[i + k]);
        }
        
        printf("\n");
    }

    return 0;
}