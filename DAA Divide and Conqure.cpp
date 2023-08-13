#include <stdio.h>
int count=0;
int findMax(int arr[], int left, int right) {
    if (left == right) {
    	count++;
        return arr[left];
    }
    else {
    	count++;
        int mid = (left + right) / 2;
        count++;
        int leftMax = findMax(arr, left, mid);
        count++;
        int rightMax = findMax(arr, mid + 1, right);
        count++;
        if (leftMax > rightMax) {
        	count++;
            return leftMax;
        }
        else {
        	count++;
            return rightMax;
        }
    }
}
int main() {
    int arr[] = {5, 2, 8, 12, 3},count=0;
    int n = sizeof(arr) / sizeof(arr[0]);
    count++;
    int max = findMax(arr, 0, n - 1);
    count++;
    printf("The maximum element in the array is %d\n", max);
    count++;
    printf("%d\n",count);
    return 0;
}

