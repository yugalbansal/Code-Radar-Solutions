// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n], freq[n];
    
    // Read input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array with -1
    }

    // Count frequency
    for (int i = 0; i < n; i++) {
        if (freq[i] == -1) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark duplicate elements
                }
            }
            freq[i] = count;
        }
    }

    // Print unique elements and their frequencies
    for (int i = 0; i < n; i++) {
        if (freq[i] > 0) {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
