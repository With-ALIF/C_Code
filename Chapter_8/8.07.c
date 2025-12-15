#include <stdio.h>
#include <string.h>

struct Vehicle {
    char type[20];
    char month[6];
    int price;
};

int main() {
    struct Vehicle vehicles[] = {
        {"MARUTI-800", "02/01", 210000},
        {"MARUTI-DX", "07/01", 265000},
        {"GYPSY", "04/02", 315750},
        {"MARUTI-VAN", "08/02", 240000}
    };
    
    char searchType[20], searchMonth[6];
    int found = 0;
    
    printf("Enter vehicle type: ");
    scanf("%s", searchType);
    printf("Enter month of sales (MM/YY): ");
    scanf("%s", searchMonth);
    
    for (int i = 0; i < 4; i++) {
        if (strcmp(vehicles[i].type, searchType) == 0 && strcmp(vehicles[i].month, searchMonth) == 0) {
            printf("Vehicle: %s, Month: %s, Price: %d\n", vehicles[i].type, vehicles[i].month, vehicles[i].price);
            found = 1;
            break;
        }
    }
    
    if (!found)
        printf("No records found.\n");
    
    return 0;
}