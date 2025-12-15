#include <stdio.h>
#include <string.h>

int countOccurrences(char text[], char word[]) {
    int count = 0;
    char *pos = strstr(text, word);
    while (pos != NULL) {
        count++;
        pos = strstr(pos + 1, word);
    }
    return count;
}

int main() {
    char text[200], word[50];
    printf("Enter text: ");
    gets(text);
    printf("Enter word to count: ");
    gets(word);
    printf("Occurrences: %d\n", countOccurrences(text, word));
    return 0;
}