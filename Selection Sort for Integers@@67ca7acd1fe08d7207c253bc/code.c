// Your code here...
void selectionSort(int arr[],int n){
    int temp,minindex;
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=0;j<n-i-1;j++){ 
        if(arr[j]>arr[minindex]){
           minindex=j;
        }
        }
            temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}