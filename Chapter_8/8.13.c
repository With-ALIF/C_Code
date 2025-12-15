#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int n, m;
    printf("Enter string: ");
    scanf("%s", s1);
    printf("Enter start position and length: ");
    scanf("%d %d", &n, &m);

    strncpy(s2, s1 + n, m);
    s2[m] = '\0';

    printf("Copied substring: %s\n", s2);
    return 0;
}