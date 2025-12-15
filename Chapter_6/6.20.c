#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    for (int i = 0; i < 10; i++) {
        printf("Enter a two-digit integer: ");
        scanf("%d", &num);
        if (num > 0 && num >= 10 && num <= 99) {
            sum += num;
            count++;
        }
        if (sum > 999) {
            break;
        }
    }
    printf("Sum of positive two-digit integers: %d\n", sum);
    printf("Number of values added: %d\n", count);
    return 0;
}
