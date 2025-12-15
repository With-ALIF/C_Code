#include<stdio.h>
int main()
{
    double num;
    int small, large;

    printf("Enter a real number: ");
    scanf("%lf", &num);

    large = (int)num;

    if(num>large){
        small = large + 1;
    }
    else{
        small = large;
    }

    printf("Smallest integer not less than the number: %d\n", large);
    printf("Largest integer not greater than the number: %d\n", small);


    return 0;
}
