#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;

    printf("Sum of digits: %d\n", sum);
    return 0;
}

