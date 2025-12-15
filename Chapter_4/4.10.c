#include <stdio.h>

int main() {
    char name1[] = "Fan";
    char name2[] = "Motor";

    double price1 = 1234.50, price2 = 576.70;
    int code1 = 67831, code2 = 450;

    printf("%-10s %-10d %10.2f\n", name1, code1, price1);
    printf("%-10s %-10d %10.2f\n", name2, code2, price2);

    return 0;
}
