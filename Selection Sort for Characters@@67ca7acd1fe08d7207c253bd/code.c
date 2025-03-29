// Your code here...
// Your code here...
void selectionSort(char arr[],int n){
    int temp,minindex;
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){ 
        if(arr[j]<arr[minindex]){
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