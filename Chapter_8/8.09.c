#include <stdio.h>

void convertToWords(float num) {
    int rupees = (int) num;
    int paise = (int)((num - rupees) * 100);

    printf("ONE HUNDRED %d AND PAISE %d\n", rupees, paise);
}

int main() {
    float amount;
    printf("Enter cost (RRRR.PP format): ");
    scanf("%f", &amount);

    convertToWords(amount);
    return 0;
}