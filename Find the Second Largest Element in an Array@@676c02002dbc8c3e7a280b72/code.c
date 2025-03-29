#include <stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1])
            temp=arr[j];
            arr[j]=arr[j+1]
            arr[j+1]=temp;
            flag=1;
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
    printf("%d",arr[n-2])
 return 0;
}
