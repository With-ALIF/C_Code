#include <stdio.h>

int main() {
    float x1 = 2, y1 = 2, x2 = 5, y2 = 6;
    float diameter = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("Diameter of the circle = %.2f\n", diameter);
    return 0;
}
