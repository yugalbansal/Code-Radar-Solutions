
#include <stdio.h>

int repeat(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                return arr[i];
                break;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
   int result=repeat(arr,n);
   printf("%d",result);
}