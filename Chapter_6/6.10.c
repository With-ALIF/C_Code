#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    printf("Table for Y = EXP(-X)\n\n");
    printf("x\t 0.1\t 0.2\t 0.3\t ... \t 0.9\n");
    printf("----------------------------------------\n");

    for (x = 0.0; x <= 9.0; x += 1.0) {
        printf("%.1lf\t", x);
        for (double step = 0.1; step <= 0.9; step += 0.1) {
            y = exp(-x - step);

            printf("%.2lf\t", y);
        }
        printf("\n");
    }

    return 0;
}

