#include<stdio.h>
int main()
{
    float price;
    printf("Enter purchase price: ");
    scanf("%f", &price);

    float service;
    printf("Enter Years of Service: ");
    scanf("%f", &service);

    float dep;
    printf("Enter annual Depreciation: ");
    scanf("%f", &dep);


    float y;
    y = price - (service*dep);

    printf("Salvage Value = %.2f\n", y);

    return 0;


}
