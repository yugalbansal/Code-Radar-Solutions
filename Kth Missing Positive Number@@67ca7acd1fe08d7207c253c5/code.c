// Your code here...
int findKthMissing(int arr[],int n,int k){
   int low=0,high=n-1,mid;
   while(low<=high){
    mid=(low+high)/2;
    int missing = arr[mid]-(mid+1);
    if(missing<k){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
   }
   int missingbefore=arr[low-1]-(low);
   return arr[low-1]+k-missingbefore;
}