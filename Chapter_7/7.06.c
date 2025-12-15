#include <stdio.h>

int main() {
    int A[50], B[50], C[100], n1, n2, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first sorted array:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &A[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second sorted array:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &B[i]);

    i = 0;
    while (i < n1 && j < n2) {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }
    while (i < n1) C[k++] = A[i++];
    while (j < n2) C[k++] = B[j++];

    printf("Merged sorted array:\n");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", C[i]);

    return 0;
}