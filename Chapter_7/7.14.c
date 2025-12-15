#include <stdio.h>

int main() {
    char isbn[10];
    int sum = 0;

    printf("Enter 9-digit ISBN (without check digit): ");
    scanf("%s", isbn);

    for (int i = 0; i < 9; i++)
        sum += (isbn[i] - '0') * (i + 1);

    int check_digit = sum % 11;
    printf("Check digit: %d\n", check_digit);
    
    return 0;
}