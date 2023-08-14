#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

void printSubset(int subset[], int size) {
    printf("{ ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", subset[i]);
    }
    printf("}\n");
}

void subsetSum(int set[], int size, int targetSum, int subset[], int subsetSize, int currentIndex, int currentSum) {
    if (currentSum == targetSum) {
        printSubset(subset, subsetSize);
        return;
    }

    if (currentIndex >= size || currentSum > targetSum) {
        return;
    }

    subset[subsetSize] = set[currentIndex];
    subsetSum(set, size, targetSum, subset, subsetSize + 1, currentIndex + 1, currentSum + set[currentIndex]);

    subsetSum(set, size, targetSum, subset, subsetSize, currentIndex + 1, currentSum);
}

int main() {
    int set[] = {10, 7, 5, 18, 12, 20, 15};
    int size = sizeof(set) / sizeof(set[0]);

    int targetSum;
    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    int subset[MAX_SIZE];
    subsetSum(set, size, targetSum, subset, 0, 0, 0);

    return 0;
}

