#include <stdio.h>
#include <math.h>

int main() {
    double P, r, V;
    int n_values[] = {1, 2, 3, 4, 5, 10};


    printf("Enter the Principal Amount (P): ");
    scanf("%lf", &P);

    printf("Enter the Interest Rate (r) in decimal (e.g., 0.10 for 10%%): ");
    scanf("%lf", &r);



       printf("\nInvestment Calculation:\n");
    printf(" P     |  r   |  n  |   V (Final Value) \n");
    printf("----------------------------------------\n");


       for (int i = 0; i < 6; i++) {
        int n = n_values[i];


                 V = P * pow((1 + r), n);


        printf("%5.2lf | %.2f | %2d  | %.2lf\n", P, r, n, V);
    }

    return 0;
}
