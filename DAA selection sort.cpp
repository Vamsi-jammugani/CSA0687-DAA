#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;

    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arrA[] = {10, 5, 80, -2, 5, 23, 45};
    int arrB[] = {12, 3, 0, 34, -11, 34, 22, 8};
    int arrC[] = {3, 35, -56, 66, 77, -78, 82};
    int nA = sizeof(arrA) / sizeof(arrA[0]);
    int nB = sizeof(arrB) / sizeof(arrB[0]);
    int nC = sizeof(arrC) / sizeof(arrC[0]);

    printf("Original array A: ");
    printArray(arrA, nA);
    selectionSort(arrA, nA);
    printf("Sorted array A: ");
    printArray(arrA, nA);

    printf("Original array B: ");
    printArray(arrB, nB);
    selectionSort(arrB, nB);
    printf("Sorted array B: ");
    printArray(arrB, nB);

    printf("Original array C: ");
    printArray(arrC, nC);
    selectionSort(arrC, nC);
    printf("Sorted array C: ");
    printArray(arrC, nC);

    return 0;
}

