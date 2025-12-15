#include <stdio.h>
#include <math.h>

int calculateUsefulLife(double originalCost, double depreciationRate, double scrapValue) {
    int n = 0;
    double presentValue = originalCost;
    while (presentValue > scrapValue) {
        presentValue = originalCost * pow(1 - depreciationRate, n);
        n++;
    }
    return n - 1;
}

int main() {
    double originalCost, depreciationRate, scrapValue;
    printf("Enter original cost: ");
    scanf("%lf", &originalCost);
    printf("Enter depreciation rate: ");
    scanf("%lf", &depreciationRate);
    printf("Enter scrap value: ");
    scanf("%lf", &scrapValue);
    printf("Useful life: %d years\n", calculateUsefulLife(originalCost, depreciationRate, scrapValue));
    return 0;
}
