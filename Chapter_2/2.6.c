#include <stdio.h>

int main() {
    int num, positive = 0, negative = 0;

    printf("Enter numbers (0 to stop):\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        if (num > 0)
            positive++;
        else
            negative++;
    }

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);

    return 0;
}

