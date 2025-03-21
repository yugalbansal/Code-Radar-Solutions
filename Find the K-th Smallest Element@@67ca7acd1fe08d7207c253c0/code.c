// // Your code here...
// void selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int minIndex = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j],arr[minIndex]){
//                 minIndex=j;
//             }
//         }
//         int temp = arr[i];
//         arr[i]=arr[minIndex];
//         arr[minIndex]=temp;
//     }
// }

// int KthSmallest(int arr[],int n,int k){
//     selectionSort(arr,n);
//     return arr[K-1];
// }

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int kthSmallest(int arr[], int n, int k) {
    if (k > n || k <= 0) {
        return -1;  // Return -1 for invalid k values
    }
    selectionSort(arr, n); // Sort the array using selection sort
    return arr[k - 1]; // Return the k-th smallest element (1-based index)
}
