#include<stdio.h>
int main()
{
    float a, b, c, d, m, n;
    printf("Enter the values of a, b, c, d, m, n");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &m, &n);

    float denominator;

    denominator = ((a*d) - (c*b));

    float x1, x2;

    if(denominator == 0){
        printf("NO unique solution (denominator is zero).\n");
    }
    else{
        x1 = ((m*d)-(b*n) / denominator);
         x2 = (n * a - m * c) / denominator;

        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);

    }

    return 0;
}
