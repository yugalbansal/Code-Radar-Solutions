// Your code here...
#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n
    int temp[n];

    // Copy the last k elements to the beginning of temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy the remaining elements to temp
    for (int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }

    // Copy temp back to arr
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    rotateRight(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
