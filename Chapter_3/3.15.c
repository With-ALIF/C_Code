#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three integer values: ");
    scanf("%d %d %d", &a, &b, &c);

    int sum = a + b + c;
    float avg = sum / 3.0f;



    int largest;
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }


    int smallest;
    if (a <= b && a <= c) {
        smallest = a;
    } else if (b <= a && b <= c) {
        smallest = b;
    } else {
        smallest = c;
    }

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}

