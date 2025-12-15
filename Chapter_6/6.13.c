#include <stdio.h>

int main() {
    double e = 1.0, term = 1.0;
    int n = 1;

    while (term > 0.00001) {
        term = term / n;
        e += term;
        n++;
    }

    printf("The value of e = %.5lf\n", e);
    return 0;
}

