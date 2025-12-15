#include <stdio.h>
#include <math.h>

int main() {
    double x;
    char T;


    printf("Enter the angle in radians: ");
    scanf("%lf", &x);

    printf("Enter the function type (s/S for sin, c/C for cos, t/T for tan): ");
    scanf(" %c", &T);

 switch (T) {
        case 's': case 'S':
            printf("sin(%.2lf) = %.4lf\n", x, sin(x));
            break;
        case 'c': case 'C':
            printf("cos(%.2lf) = %.4lf\n", x, cos(x));
            break;
        case 't': case 'T':
            printf("tan(%.2lf) = %.4lf\n", x, tan(x));
            break;
        default:
            printf("Invalid input! Please enter s, c, or t.\n");
    }

    return 0;
}

