#include<stdio.h>
int main()
{
    int a;
    printf("Input a Integer Number: ");
    scanf("%d", &a);

    if(a % 2 == 0)
        printf("Number %d is Even.\n", a);

    if(a % 2 != 0)
        printf("Number %d is Odd.\n", a);

    return 0;
}
