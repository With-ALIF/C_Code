#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int marks;
};

void sortByName(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    struct Student students[3] = {
        {1, "Alice", 85},
        {2, "Bob", 90},
        {3, "Charlie", 80}
    };

    sortByName(students, 3);
    printf("Sorted by Name:\n");
    for (int i = 0; i < 3; i++)
        printf("%d %s %d\n", students[i].roll, students[i].name, students[i].marks);

    return 0;
}