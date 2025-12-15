#include <stdio.h>

int main() {
    int age, count = 0;

    printf("Enter the ages of 100 persons:\n");

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &age);

        if (age >= 50 && age <= 60) {
            count++;
            count++;
        }

    }

    printf("Number of people in the age group 50-60: %d\n", count);

    return 0;
}

