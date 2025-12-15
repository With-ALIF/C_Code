#include <stdio.h>

#define DAYS 31
#define CITIES 10

int findMaxTemperature(int temp[DAYS][CITIES], int *day, int *city) {
    int maxTemp = temp[0][0];
    *day = 0, *city = 0;

    for (int i = 0; i < DAYS; i++) {
        for (int j = 0; j < CITIES; j++) {
            if (temp[i][j] > maxTemp) {
                maxTemp = temp[i][j];
                *day = i + 1;
                *city = j + 1;
            }
        }
    }
    return maxTemp;
}

int findMinTemperature(int temp[DAYS][CITIES], int *day, int *city) {
    int minTemp = temp[0][0];
    *day = 0, *city = 0;

    for (int i = 0; i < DAYS; i++) {
        for (int j = 0; j < CITIES; j++) {
            if (temp[i][j] < minTemp) {
                minTemp = temp[i][j];
                *day = i + 1;
                *city = j + 1;
            }
        }
    }
    return minTemp;
}

int main() {
    int temp[DAYS][CITIES] = {
        {30, 32, 29, 35, 33, 31, 30, 29, 34, 36},
        {28, 31, 30, 34, 32, 33, 31, 30, 32, 35},
        
    };

    int maxDay, maxCity, minDay, minCity;
    int maxTemp = findMaxTemperature(temp, &maxDay, &maxCity);
    int minTemp = findMinTemperature(temp, &minDay, &minCity);

    printf("Highest temperature: %d°C on Day %d in City %d\n", maxTemp, maxDay, maxCity);
    printf("Lowest temperature: %d°C on Day %d in City %d\n", minTemp, minDay, minCity);
    return 0;
}