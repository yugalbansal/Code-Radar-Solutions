// Your code here...
int findOccurence(int arr[],int n,int target,char mode){
    if(mode=='F'){
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                return i;
            }
        }
    }
    else if(mode=='T'){
        for(int i=n;i>0;i--){
            if(arr[n]==target){
                return n;
            }
        }
    }
    return -1;
}