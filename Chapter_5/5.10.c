#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, d, root1, root2;

    printf("Enter the value of a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    //case (a)

    if (a == 0 && b == 0){
        printf("No solution.\n");
    }
    //case (b)
    else if(a == 0){
        root1 = (-c/b);

        printf("First value: %.2lf\n", root1);
    }

    //case (c) and (d)
    else {
        d = ((b*b) - (4*a*c));

        if(d < 0){
            printf("No real roots.\n");
        }
        else{
            root1 = (-b + sqrt(d)) / (2*a);
            root2 = (-b - sqrt(d)) / (2*a);

            printf("Roots: %.2lf and %.2lf\n", root1, root2);
        }

    }

    return 0;
}
