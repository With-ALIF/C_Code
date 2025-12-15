#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int rev = 0;

    for( ; a!=0; a/=10){
        rev = rev*10 + a%10;
    }

    printf("The Reverse: %d", rev);

    return 0;

}

