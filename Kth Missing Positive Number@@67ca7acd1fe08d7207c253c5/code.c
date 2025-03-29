// Your code here...
int findKthMissing(int arr[],int n,int k){
    if(arr[0]>1){
        int miss=arr[0]-1;
        if(k<miss){
            return k;
        }
        else{
            k-=miss;
        }
    }

    for(int i=0;i<n;i++){
        int curr=arr[i];
        int next=arr[i+1];
        int missbet=next-1-curr;
        if(k<=missbet){
            return curr+k;
        }
        else{
            k-=missbet;
        }
    }
    return arr[n-1]+k;
}