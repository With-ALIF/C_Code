#include <stdio.h>
#include <math.h>

void graphSin() {
    for (int angle = 0; angle <= 180; angle += 15) {
        double radians = angle * M_PI / 180.0;
        double y = sin(radians);
        printf("%3d degrees: ", angle);
        int stars = (int)((y + 1) * 20);
        for (int i = 0; i < stars; i++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    graphSin();
    return 0;
}
