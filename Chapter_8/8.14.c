#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
};

int main() {
    struct Student students[3] = {
        {101, "Alice"},
        {102, "Bob"},
        {103, "Charlie"}
    };

    int roll;
    printf("Enter roll number: ");
    scanf("%d", &roll);

    for (int i = 0; i < 3; i++) {
        if (students[i].roll == roll) {
            printf("Student Name: %s\n", students[i].name);
            return 0;
        }
    }

    printf("Roll number not found.\n");
    return 0;
}