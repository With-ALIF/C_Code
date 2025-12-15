#include <stdio.h>

int main() {
    int math, physics, chemistry;

    printf("Enter marks in Mathematics: ");
    scanf("%d", &math);
    printf("Enter marks in Physics: ");
    scanf("%d", &physics);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);

    int total = math + physics + chemistry;
    int total_math_physics = math + physics;

    if ((math >= 60 && physics >= 50 && chemistry >= 40 && total >= 200) || total_math_physics >= 150) {
        printf("Candidate is eligible for admission.\n");
    } else {
        printf("Candidate is NOT eligible for admission.\n");
    }

    return 0;
}

