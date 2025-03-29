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
    if(arr[n-1]==arr[0]){
        printf("-1");
    }
    else if(n>1){

        printf("%d",arr[n-2]);
    }
    else{
        printf("-1");
    }
    return 0;
    }



