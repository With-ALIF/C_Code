#include <stdio.h>

int main() {
    int m, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &m);

    for (int i = 1; i <= m; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", m, factorial);
    return 0;
}

