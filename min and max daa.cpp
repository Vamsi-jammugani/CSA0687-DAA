#include <stdio.h>

int main() {
    int numCount;

    printf("Enter the number of elements in the list: ");
    scanf("%d", &numCount);

    int numbers[numCount];

    printf("Enter the elements:\n");
    for (int i = 0; i < numCount; ++i) {
        scanf("%d", &numbers[i]);
    }

    int min = numbers[0];
    int max = numbers[0];

    for (int i = 1; i < numCount; ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}

