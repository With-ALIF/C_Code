#include <stdio.h>
#include <string.h>

void replaceWord(char str[], char oldWord[], char newWord[]) {
    char result[200] = "";
    char *pos = strstr(str, oldWord);

    if (pos == NULL) {
        printf("Word not found!\n");
        return;
    }

    while (pos != NULL) {
        strncat(result, str, pos - str);
        strcat(result, newWord);
        str = pos + strlen(oldWord);
        pos = strstr(str, oldWord);
    }
    strcat(result, str);
    printf("Modified text: %s\n", result);
}

int main() {
    char text[200] = "It is good to program in PASCAL language.";
    replaceWord(text, "PASCAL", "C");
    return 0;
}