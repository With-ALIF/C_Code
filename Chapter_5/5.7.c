#include <stdio.h>

int main() {
    int n, num = 1;

    printf("Enter the number limit for Floyd's Triangle: ");
    scanf("%d", &n);

    for (int i = 1; num <= n; i++) {
        for (int j = 1; j <= i && num <= n; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}

