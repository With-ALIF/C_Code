#include<stdio.h>
int main()
{
    float x, y;
    printf("Enter the length and width :");
    scanf("%f %f", &x, &y);

    float a, b;
     a= x*y;                    // a = area
     b= (2*(x+y));                // b= perimeter

     printf("The area of rectangle is %.3f\n.", a);
     printf("The perimeter of rectangle is %.3f\n.", b);

     return 0;
}
