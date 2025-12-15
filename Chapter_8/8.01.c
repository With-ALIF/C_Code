#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    gets(name);
    
    printf("ASCII values:\n");
    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c: %d\n", name[i], name[i]);
    }
    return 0;
}