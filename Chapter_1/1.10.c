
#include <stdio.h>
#include <math.h>

int main() {
    float a = 5, b = 6, c = 7;
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle = %.2f\n", area);
    return 0;
}
