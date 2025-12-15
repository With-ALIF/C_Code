#include <stdio.h>

int main() {
    int purchaseAmount;
    char itemType;
    float discount = 0.0, netAmount;

    printf("Enter purchase amount: ");
    scanf("%d", &purchaseAmount);

    printf("Enter item type (M for MU cloth, H for Handloom): ");
    scanf(" %c", &itemType);


    if (purchaseAmount >= 0 && purchaseAmount <= 100) {
        discount = 0.05;
    }

     else if (purchaseAmount >= 101 && purchaseAmount <= 200) {
        discount = (itemType == 'M') ? 0.05 : 0.075;
    }

     else if (purchaseAmount >= 201 && purchaseAmount <= 300) {
        discount = (itemType == 'M') ? 0.075 : 0.10;
    }

     else if (purchaseAmount > 300) {
        discount = (itemType == 'M') ? 0.10 : 0.15;
    }

     else {
        printf("Invalid purchase amount.\n");
        return 1;
    }


    netAmount = purchaseAmount * (1 - discount);

    printf("Net amount to be paid: %.2f\n", netAmount);

    return 0;
}
