#include<stdio.h>
int main()
{
    int count, sum;
    count = 0;
    sum = 0;

    for (int i = 100; i <= 200; i++){
        if(i % 7 == 0){
                        count++;
        sum = sum + i;
        }

    }

    printf("Count : %d\n", count);
    printf("Sum : %d\n", sum);

    return 0;

}
