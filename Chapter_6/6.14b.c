#include <stdio.h>
#include <math.h>

double factorial(int n) {
    if (n == 0) return 1;
    double result = 1;
    for (int i = 1; i <= n; i++) result *= i;
    return result;
}

double calculateCos(double x) {
    double term = 1;
    double sum = term;
    int n = 2;
    int sign = -1;
    while (fabs(term / sum) > 0.000001) {
        term = sign * pow(x, n) / factorial(n);
        sum += term;
        n += 2;
        sign *= -1;
    }
    return sum;
}

int main() {
    double x = 1.0;
    printf("cos(%.2f) = %.6f\n", x, calculateCos(x));
    return 0;
}
