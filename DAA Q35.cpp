#include <stdio.h>

void backtrack(int* nums, int numsSize, int start, int* subset, int subsetSize, int** result, int* resultSize, int* returnColumnSizes) {
    result[*resultSize] = (int*)malloc(subsetSize * sizeof(int));
    memcpy(result[*resultSize], subset, subsetSize * sizeof(int));
    returnColumnSizes[*resultSize] = subsetSize;
    (*resultSize)++;

    for (int i = start; i < numsSize; i++) {
        subset[subsetSize] = nums[i];
        backtrack(nums, numsSize, i + 1, subset, subsetSize + 1, result, resultSize, returnColumnSizes);
    }
}

int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int maxSubsets = pow(2, numsSize);
    int** result = (int**)malloc(maxSubsets * sizeof(int*));
    int* subset = (int*)malloc(numsSize * sizeof(int));
    *returnColumnSizes = (int*)malloc(maxSubsets * sizeof(int));

    *returnSize = 0;
    backtrack(nums, numsSize, 0, subset, 0, result, returnSize, *returnColumnSizes);

    free(subset);
    return result;
}

int main() {
    int nums[] = {1, 2, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int returnSize;
    int* returnColumnSizes;
    int** result = subsets(nums, numsSize, &returnSize, &returnColumnSizes);

    printf("Output: [ ");
    for (int i = 0; i < returnSize; i++) {
        printf("[");
        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d", result[i][j]);
            if (j < returnColumnSizes[i] - 1) {
                printf(", ");
            }
        }
        printf("] ");
    }
    printf("]\n");

    // Free memory
    for (int i = 0; i < returnSize; i++) {
        free(result[i]);
    }
    free(result);
    free(returnColumnSizes);

    return 0;
}

