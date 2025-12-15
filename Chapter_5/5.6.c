#include <stdio.h>
#include <math.h>

int main() {
    printf("Square Root Table\n\n");

    // Print header
    printf("%-6s", "Number");
    for (double j = 0.0; j < 1.0; j += 0.1)
        printf("%6.1f", j);
    printf("\n");

    // Print table values
    for (double i = 0.0; i <= 9.0; i += 1.0) {
        printf("%-6.1f", i);
        for (double j = 0.0; j < 1.0; j += 0.1) {
            printf("%6.2f", sqrt(i + j));
        }
        printf("\n");
    }

    return 0;
}

