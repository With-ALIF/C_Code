#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n should be greater than 0.\n");
        return 1;
    }

    float sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (1.0 / i);
    }

    printf("Sum of the harmonic series is %.2f\n", sum);

    return 0;
}
