#include<stdio.h>
int main()
{
    char str[] = "WORDPROCESSING";

    printf("(a)%s %s\n", "WORD", "PROCESSING");

    printf("(b)%s\n%s\n", "WORD", "PROCESSING");

     printf("(c)%c.%c.\n", str[0], str[4]);


    return 0;
}
