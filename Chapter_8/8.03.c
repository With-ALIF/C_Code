#include <stdio.h>
#include <string.h>

void extractSubstring(char str[], int n, int m) {
    int len = strlen(str);
    if (n >= len) {
        printf("Invalid starting position.\n");
        return;
    }
    for (int i = n; i < n + m && str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];
    int n, m;
    printf("Enter a string: ");
    gets(str);
    printf("Enter starting position (n) and number of characters (m): ");
    scanf("%d %d", &n, &m);
    extractSubstring(str, n, m);
    return 0;
}