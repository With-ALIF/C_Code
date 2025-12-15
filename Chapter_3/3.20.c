#include <stdio.h>

int main() {
    int total_marks = 455, subjects = 5;
    double average;

    average = (double) total_marks / subjects;

    printf("Total Marks: %d\n", total_marks);
    printf("Subjects: %d\n", subjects);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
