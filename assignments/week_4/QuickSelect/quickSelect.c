#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = left;

    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }

    swap(&arr[i], &arr[right]);
    return i;
}

void quickSelect(int arr[], int left, int right, int k) {
    if (left >= right)
        return;

    int pivotIndex = partition(arr, left, right);

    if (pivotIndex == k)
        return;
    else if (pivotIndex > k)
        quickSelect(arr, left, pivotIndex - 1, k);
    else
        quickSelect(arr, pivotIndex + 1, right, k);
}

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter K: ");
    scanf("%d", &k);

    if(k <= 0 || k > n){
        printf("Invalid K\n");
        return 0;
    }

    quickSelect(arr, 0, n - 1, k - 1);

    printf("\nSmallest %d elements:\n", k);

    for(int i = 0; i < k; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
