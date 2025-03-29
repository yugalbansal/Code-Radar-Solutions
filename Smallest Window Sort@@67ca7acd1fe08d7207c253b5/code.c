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
    return right-left+1;
}