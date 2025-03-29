// Your code here...
#include <stdio.h>

int searchInRotatedArray(int arr[], int n, int target) {
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
    // int low = 0, high = n - 1;

    
    // while (low <= high) {
    //     int mid = low + (high - low) / 2;
        
    //     // Check if mid is the target
    //     if (arr[mid] == target) {
    //         return mid;
    //     }
        
    //     // Determine which half is sorted
    //     if (arr[low] <= arr[mid]) {
    //         // Left half is sorted
    //         if (arr[low] <= target && target < arr[mid]) {
    //             high = mid - 1; // target lies in the left half
    //         } else {
    //             low = mid + 1;  // target lies in the right half
    //         }
    //     } else {
    //         // Right half is sorted
    //         if (arr[mid] < target && target <= arr[high]) {
    //             low = mid + 1;  // target lies in the right half
    //         } else {
    //             high = mid - 1; // target lies in the left half
    //         }
    //     }
    // }
    
    // // If we exit the loop, the target was not found
    return -1;
}

