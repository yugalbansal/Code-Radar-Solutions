// Your code here...
void binarySearch(int arr[],int n,int k){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            low=mid+1;
        }
        else if(arr[mid]>k){
            high=mid-1
        }
    }
    return -1;
}