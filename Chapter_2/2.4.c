#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter two float numbers: ");
    scanf("%f %f", &num1, &num2);

    if (num2 != 0) {
        result = num1 / num2;
        printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}

