#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter a 6-digit number for x: ");
    scanf("%d", &x);

    printf("Enter a 6-digit number for y: ");
    scanf("%d", &y);

    z = x + y;

    printf("Values: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}

