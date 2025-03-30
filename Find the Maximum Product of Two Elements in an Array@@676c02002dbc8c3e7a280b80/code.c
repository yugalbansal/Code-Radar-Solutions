#include <stdio.h>

int repeat(int arr[],int n){
    int max = arr[0]*arr[1];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]*arr[i]>max){
                max = arr[j]*arr[i];
                return arr[i];
             
            }
        }
    }
    return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
   
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
   int result=repeat(arr,n);
   printf("%d",result);
}