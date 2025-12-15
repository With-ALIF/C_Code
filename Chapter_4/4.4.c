#include <stdio.h>
#include <math.h>

void printBar(float value) {
    int rounded = round(value);
    for (int i = 0; i < rounded; i++) {
        printf("* ");
    }
    printf(" %.2f\n", value);
}

int main() {
    float values[4];


    printf("Enter four floating point values (0.0 to 20.0): ");
    for (int i = 0; i < 4; i++) {
        scanf("%f", &values[i]);
    }


    for (int i = 0; i < 4; i++) {
        printBar(values[i]);
    }

    return 0;
}
