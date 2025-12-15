#include <stdio.h>

double calculateSlope(int x[], int y[], int n) {
    int sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;
    
    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
    }

    return (n * sumXY - sumX * sumY) / (double)(n * sumX2 - sumX * sumX);
}

double calculateIntercept(int x[], int y[], int n, double m) {
    int sumX = 0, sumY = 0;
    
    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumY += y[i];
    }

    return (sumY - m * sumX) / (double)n;
}

int main() {
    int x[] = {1, 2, 3, 4, 5};
    int y[] = {2, 4, 5, 4, 5};
    int n = sizeof(x) / sizeof(x[0]);

    double m = calculateSlope(x, y, n);
    double c = calculateIntercept(x, y, n, m);

    printf("Equation of the straight line: y = %.2fx + %.2f\n", m, c);
    return 0;
}