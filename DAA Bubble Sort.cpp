#include <stdio.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arrA[] = {10, 5, 80, -2, 5, 23, 45};
    int arrB[] = {12, 3, 0, 34, -11, 34, 22, 8};
    int arrC[] = {3, 35, -56, 66, 77, -78, 82};
    int nA = sizeof(arrA) / sizeof(arrA[0]);
    int nB = sizeof(arrB) / sizeof(arrB[0]);
    int nC = sizeof(arrC) / sizeof(arrC[0]);

    printf("Array A before sorting: ");
    for (int i = 0; i < nA; i++)
        printf("%d ", arrA[i]);
    printf("\n");

    clock_t startA = clock();
    bubbleSort(arrA, nA);
    clock_t endA = clock();

    printf("Array A after sorting: ");
    for (int i = 0; i < nA; i++)
        printf("%d ", arrA[i]);
    printf("\n");

    double timeTakenA = ((double) (endA - startA)) / CLOCKS_PER_SEC;
    printf("Time taken for array A: %f seconds\n", timeTakenA);
    printf("Estimated time complexity for array A: O(n^2)\n");

    // Perform the same operations for arrays B and C

    return 0;
}

