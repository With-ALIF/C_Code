#include<stdio.h>
int main()
{
    int x, y, z, temp;

    printf("Input three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    temp = x;
    x = y;
    y = z;
    z = temp;

    printf("After rotation x=%d, y=%d, z=%d \n", x, y, z);

    return 0;



}
