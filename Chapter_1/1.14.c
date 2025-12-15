#include <stdio.h>

int main() {
    float a = 5, b = 8, c = 18, x, y;

    if (b != 0) {
        x = c / a;
        y = (c - (a * x)) / b;
        printf("x = %.2f, y = %.2f\n", x, y);
    } else {
        printf("Error: Cannot divide by zero.\n");
    }

    return 0;
}

