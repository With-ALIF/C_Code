#include<stdio.h>
int main()
{
    char first[20], middle[20], last[20];
    printf("A person First Middle Last Name : ");
    scanf("%s %s %s", first, middle, last);

    //(a)
    printf("%s %c. %s\n", first, middle[0], last);

    //(b)
    printf("%c. %c. %s\n", first[0], middle[0], last);

    //(c)
        printf("%s %c. %c.\n", last, first[0], middle[0]);

        return 0;


}
