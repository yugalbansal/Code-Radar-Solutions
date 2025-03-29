void selectionSort(int arr[],int n){
        int min,temp;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int KthSmallest(int arr[],int n,int k){
    selectionSort(arr,n);
    if(k>0 && k<=n){
        return arr[k];
    }
    return -1;

}