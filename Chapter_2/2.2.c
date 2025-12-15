#include <stdio.h>

int main() {
    float price;
    int paise;

    printf("Enter the price in decimal (Rs): ");
    scanf("%f", &price);

    paise = price * 100; // Convert rupees to paise

    printf("Price in paise: %d paise\n", paise);
    return 0;
}

