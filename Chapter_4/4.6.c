#include <stdio.h>

int main() {
    int a, b, c;


    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);


    printf("%d ", a);
    printf("%d ", b);
    printf("%d\n", c);


    printf("%d %d %d\n", a, b, c);


    printf(a, b, c);

    return 0;
}

