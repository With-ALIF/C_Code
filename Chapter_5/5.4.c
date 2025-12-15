#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];


    printf("Enter the marks for %d students (0-100):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    int more_than_80 = 0;
    int more_than_60 = 0;
    int more_than_40 = 0;
    int forty_or_less = 0;
    int range_81_100 = 0;
    int range_61_80 = 0;
    int range_41_60 = 0;
    int range_0_40 = 0;


    for (int i = 0; i < n; i++) {
        if (marks[i] > 80) more_than_80++;
        if (marks[i] > 60) more_than_60++;
        if (marks[i] > 40) more_than_40++;
        if (marks[i] <= 40) forty_or_less++;

        if (marks[i] >= 81) range_81_100++;
        else if (marks[i] >= 61) range_61_80++;
        else if (marks[i] >= 41) range_41_60++;
        else range_0_40++;
    }

    printf("\nStudents who scored more than 80: %d\n", more_than_80);
    printf("Students who scored more than 60: %d\n", more_than_60);
    printf("Students who scored more than 40: %d\n", more_than_40);
    printf("Students who scored 40 or less: %d\n", forty_or_less);
    printf("Students in range 81-100: %d\n", range_81_100);
    printf("Students in range 61-80: %d\n", range_61_80);
    printf("Students in range 41-60: %d\n", range_41_60);
    printf("Students in range 0-40: %d\n", range_0_40);

    return 0;
}
