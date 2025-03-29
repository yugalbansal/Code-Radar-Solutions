// Your code here...
// Your code here...
void bubbleSort(char arr[],int n){
    int flag=0,temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){

            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=1;
            }
        }
        if(flag==0){
            break;
        }
 
    }
}

void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}