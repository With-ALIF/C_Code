
#include <stdio.h>
#include <math.h>

int main() {
    printf("+--------+------------+--------+\n");
    printf("| Number | Square-root | Square |\n");
    printf("+--------+------------+--------+\n");

    for (int i = 0; i <= 100; i += 10) {
        printf("| %6d | %10.2f | %6d |\n", i, sqrt(i), i * i);
    }

    printf("+--------+------------+--------+\n");
    return 0;
}
