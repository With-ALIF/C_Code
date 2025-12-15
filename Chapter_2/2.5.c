#include <stdio.h>

int main() {
    float ricePrice, sugarPrice;

    printf("Enter the price of 1 kg Rice: ");
    scanf("%f", &ricePrice);

    printf("Enter the price of 1 kg Sugar: ");
    scanf("%f", &sugarPrice);

    printf("*** LIST OF ITEMS ***\n");
    printf("Item\tPrice\n");
    printf("Rice\tRs %.2f\n", ricePrice);
    printf("Sugar\tRs %.2f\n", sugarPrice);

    return 0;
}

