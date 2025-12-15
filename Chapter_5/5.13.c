#include <stdio.h>

int main() {
    int sum = 0, count = 0;

    for (int i = 0; i <= 100; i++) {
        if (i % 6 == 0 && i % 4 != 0) {
            sum += i;
            count++;
        }
    }

    printf("Sum: %d\n", sum);
    printf("Count of numbers: %d\n", count);

    return 0;
}

