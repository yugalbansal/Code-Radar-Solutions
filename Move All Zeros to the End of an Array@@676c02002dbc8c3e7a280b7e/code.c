#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(arr[i]!=0){
            arr1[count]=arr[i];
            count++;
        }
    }
    for(int i=count;i<n;i++){
        arr1[count]=0;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }

    return 0;
}