#include <stdio.h>

int main() {
    float u, a;
    int t, time_interval, max_time;

    // User input
    printf("Enter initial velocity (m/s): ");
    scanf("%f", &u);
    printf("Enter acceleration (m/s^2): ");
    scanf("%f", &a);
    printf("Enter time interval (s): ");
    scanf("%d", &time_interval);
    printf("Enter maximum time (s): ");
    scanf("%d", &max_time);

    // Display table header
    printf("\nTime (s) | Distance (m)\n");
    printf("-----------------------\n");

    // Calculation loop
    for (t = 0; t <= max_time; t += time_interval) {
        float distance = (u * t) + (0.5 * a * t * t);
        printf("%8d | %10.2f\n", t, distance);
    }

    return 0;
}

