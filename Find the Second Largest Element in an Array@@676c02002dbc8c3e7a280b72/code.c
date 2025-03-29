#include <stdio.h>
void sort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){ 
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=1;}
        }
        if(flag==0){
            break;
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr,n);
    if(arr[0] == arr[n - 1]) {
        printf("%d",arr[0]);
    } else {
        int secondLargest = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if(arr[i] < arr[n - 1]) {
                secondLargest = arr[i];
                break;
            }
        }
        printf("%d", secondLargest);
    }

    return 0;
}

