#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r){
int count=0;
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int main() {
    int m, n,count=0;
    printf("Enter the size of nums1 array: ");
    count++;
    scanf("%d", &m);
    count++;
    int nums1[m];
    printf("Enter the elements of nums1 array in non-increasing order: ");
    count++;
    count++;
    for (int i = 0; i < m; i++) {
    	count++;
    	count++;
    	count++;
        scanf("%d", &nums1[i]);
        count++;
    }
    count++;
    printf("Enter the size of nums2 array: ");
    count++;
    scanf("%d", &n);
    count++;
    int nums2[n];
    printf("Enter the elements of nums2 array in non-increasing order: ");
    count++;
    count++;
    for (int i = 0; i < n; i++) {
    	count++;
    	count++;
    	count++;
        scanf("%d", &nums2[i]);
        count++;
    }
    count++;
    int merged[m+n];
    int i, j, k;
    i = j = k = 0;
    count++;
    count++;
    while (i < m && j < n) {
    	count++;
        if (nums1[i] >= nums2[j]) {
        	count++;
        	count++;
            merged[k] = nums1[i];
            count++;
            i++;
            count++;
        }
		 else {
		 	count++;
            merged[k] = nums2[j];
            count++;
            j++;
            count++;
        }
        k++;
        count++;
    }
    count++;
    while (i < m) {
    	count++;
        merged[k] = nums1[i];
        count++;
        i++;
        count++;
        k++;
        count++;
    }
    count++;
    count++;
    while (j < n) {
    	count++;
        merged[k] = nums2[j];
        count++;
        j++;
        count++;
        k++;
        count++;
    }
    count++;
    mergeSort(merged, 0, m+n-1);
    count++;
    printf("Merged array: ");
    count++;
    count++;
    for (int i = 0; i < m + n; i++) {
    	count++;
    	count++;
    	count++;
        printf("%d ", merged[i]);
        count++;
    }
    count++;
    printf("\n");
    count++;
    printf("\n %d",count);
    return 0;
}

