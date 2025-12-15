#include <stdio.h>

int main() {
    int n, key, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter key to search: ");
    scanf("%d", &key);

    int left = 0, right = n - 1, mid, found = 0;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == key) {
            found = 1;
            break;
        }
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (found)
        printf("Key found at index %d\n", mid);
    else
        printf("Key not found\n");

    return 0;
}