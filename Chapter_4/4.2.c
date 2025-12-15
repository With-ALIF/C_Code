#include<stdio.h>
int main()
{

    float x, y;
    printf("Enter the value of x & y: ");
    scanf("%f %f", &x, &y);

    float m, n, o;

    m = (x+y)/(x-y);
    n = (x+y)/2;
    o = (x+y)*(x-y);

    printf("(a)  %.2f  (b)  %.2f   (c)  %.2f", m, n, o);

    return 0;
}
