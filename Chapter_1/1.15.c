
#include <stdio.h>

int main() {
    float a = 5, b = 8, c = 18;
    float sum, difference, product, division;

    sum = a + b;
    difference = a - b;
    product = a * b;

    if (b != 0)
        division = a / b;
    else
        division = 0; // Handle division by zero

    printf("x = %.2f, y = %.2f\n", a, b);
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);
    printf("Division = %.2f\n", division);

    return 0;
}
