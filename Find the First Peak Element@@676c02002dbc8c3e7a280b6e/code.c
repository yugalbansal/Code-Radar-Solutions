#include <stdio.h>

int peakElement(int arr[], int n) {
    if (n == 1) return arr[0];  // Fix: Single element is always a peak
    
    if (arr[0] > arr[1]) return arr[0];  // Fix: Correct first element check
    if (arr[n-1] > arr[n-2]) return arr[n-1];  // Fix: Correct last element check

    for (int i = 1; i < n - 1; i++) {  // Fix: Start from index 1, go till n-2
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];  // Found a peak
        }
    }

    return -1;  // No peak found
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", peakElement(arr, n));

    return 0;
}
