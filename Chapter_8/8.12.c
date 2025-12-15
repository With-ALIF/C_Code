#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[50];
    printf("Enter main string: ");
    scanf("%s", str);
    printf("Enter substring: ");
    scanf("%s", sub);

    int count = 0;
    char *ptr = strstr(str, sub);
    while (ptr) {
        count++;
        ptr = strstr(ptr + 1, sub);
    }

    printf("Occurrences: %d\n", count);
    return 0;
}