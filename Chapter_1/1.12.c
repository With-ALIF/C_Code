
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius = 5;
    float perimeter = 2 * PI * radius;
    float area = PI * radius * radius;

    printf("Perimeter of the circle = %.2f\n", perimeter);
    printf("Area of the circle = %.2f\n", area);
    return 0;
}
