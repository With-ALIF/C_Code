#include <stdio.h>

int main() {
    float a, b;
    int c;

    printf("Enter two floating point numbers: ");
    scanf("%f %f", &a, &b);

    c = (int)(a + b);

    printf("Values: a = %.2f, b = %.2f, c = %d\n", a, b, c);

    return 0;
}

