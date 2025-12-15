#include <stdio.h>

int main() {
    int students = 100, subjects = 3, marks[100][3], total[100] = {0};
    int highest_subject[3] = {0}, highest_total = 0, highest_student = 0;

    printf("Enter marks for 100 students (3 subjects each):\n");
    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];

            if (marks[i][j] > highest_subject[j])
                highest_subject[j] = marks[i][j];
        }
        if (total[i] > highest_total) {
            highest_total = total[i];
            highest_student = i + 1;
        }
    }

    printf("Total marks of each student:\n");
    for (int i = 0; i < students; i++)
        printf("Student %d: %d\n", i + 1, total[i]);

    printf("Highest marks in each subject:\n");
    for (int j = 0; j < subjects; j++)
        printf("Subject %d: %d\n", j + 1, highest_subject[j]);

    printf("Student with highest total marks: Student %d with %d marks\n", highest_student, highest_total);
    return 0;
}