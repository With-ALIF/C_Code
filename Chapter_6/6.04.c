#include <stdio.h>

int main() {
    int m, a = 1, b = 1, next;
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &m);

    printf("Fibonacci sequence: %d %d ", a, b);
    int count = 2;

    do {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
        count++;
    } while (count < m);

    printf("\n");
    return 0;
}
