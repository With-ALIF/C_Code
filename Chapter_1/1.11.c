#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    float x1 = 1, y1 = 3, x2 = 4, y2 = 7;
    printf("Distance between (%.1f,%.1f) and (%.1f,%.1f) = %.2f\n", x1, y1, x2, y2, distance(x1, y1, x2, y2));
    return 0;
}

