// Your code here...
int findUnsortedSubarray(int arr[],int n){
    int left =0,right=n-1;
    while(left<n-1 && arr[left]<arr[left+1]){
        left++;
    }
    if(left==n-1){return 0;}
    while(right>0 && arr[right]>arr[right-1]){
        right--;
    }
    // we have to find now maximum and min element .
    int max=arr[left],min=arr[left];
    for(int i=left;i<=right;i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    while(left>0 && arr[left-1]>min){
        left--;
    }
    while(right<n-1 && arr[right+1]<max){
        right++;
    }
    return right-left+1;
}