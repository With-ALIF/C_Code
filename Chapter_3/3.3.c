#include<stdio.h>
int main()
{
    float num;
    printf("Enter a floating number: ");
    scanf("%f", &num);

    int integral_part = (int)num;
    int rightmost_digit = integral_part % 100;

    printf("The rightmost number :  %d\n", rightmost_digit);

    return 0;


}

