#include <stdio.h>

int main() {
    int num, div = 1;


    printf("Enter an integer number: ");
    scanf("%d", &num);


    for (int n = num; n >= 10; n /= 10) {
        div *= 10;
    }


    for (int temp = num; temp > 0; temp %= div, div /= 10) {
        printf("%d\n", temp);
    }

    return 0;
}
