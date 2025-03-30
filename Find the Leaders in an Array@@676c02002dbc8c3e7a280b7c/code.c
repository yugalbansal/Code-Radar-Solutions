
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }   
    for(int i=1;i<n-1;i++){
        int j=i+1;
        int leader=1;
        while(j<n){
            if(arr[i]<arr[j]){
                leader=0;
                break;
            }
            j++;
        }
        if(leader){
            printf("%d",arr[i]);
        }
    }
    printf("%d ",arr[-1]);
    
}