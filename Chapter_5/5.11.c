#include <stdio.h>

int main() {
    int a, b, c, max, side1, side2;

    // Input three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Identify the hypotenuse (longest side)
    if (a > b && a > c) {
        max = a;
        side1 = b;
        side2 = c;
    } else if (b > a && b > c) {
        max = b;
        side1 = a;
        side2 = c;
    } else {
        max = c;
        side1 = a;
        side2 = b;
    }

    // Check Pythagorean theorem
    if (max * max == side1 * side1 + side2 * side2) {
        printf("The numbers form a right-angled triangle.\n");
    } else {
        printf("The numbers do not form a right-angled triangle.\n");
    }

    return 0;
}

