#include <stdio.h>

int main() {
    int n, num = 1;
    
    printf("Enter the number limit for Modified Floyd's Triangle: ");
    scanf("%d", &n);

    for (int i = 1; num <= n; i++) {
        for (int j = 1; j <= i && num <= n; j++, num++) {
            // Print 0 or 1 based on the current count being even or odd
            printf("%d ", num % 2);
        }
        printf("\n");
    }

    return 0;
}
