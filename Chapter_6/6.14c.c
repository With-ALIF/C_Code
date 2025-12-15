#include <stdio.h>
#include <math.h>

double calculateSum() {
    double term = 1;
    double sum = term;
    int n = 2;
    while (fabs(term / sum) > 0.000001) {
        term = pow(1.0 / n, n);
        sum += term;
        n++;
    }
    return sum;
}

int main() {
    printf("SUM = %.6f\n", calculateSum());
    return 0;
}
