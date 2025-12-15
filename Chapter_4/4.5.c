
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two two-digit integers: ");
    scanf("%d %d", &num1, &num2);

    int x = num2%10;
    int y = num2/10;

    int a = x*num1;
    int b = y*num1*10;

    int c = num1*num2;

    printf("\n  %d\n", num1);
    printf(" *%d\n", num2);
    printf("--------\n");
    printf("%d * %d = %d\n", x, num1, a);
    printf("%d * %d = %d\n", y, num1, b);
    printf("Add Them  %d\n", c);

    return 0;

}
