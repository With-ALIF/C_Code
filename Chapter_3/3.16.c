#include <stdio.h>

int main() {
    int customerCode, calls;
    float bill = 250.0f;

    printf("Enter customer code and number of calls made: ");
    scanf("%d %d", &customerCode, &calls);

    if (calls > 100) {
        bill += (calls - 100) * 1.25f;
    }

    printf("Customer Code: %d\n", customerCode);
    printf("Total Bill: Rs. %.2f\n", bill);

    return 0;
}

