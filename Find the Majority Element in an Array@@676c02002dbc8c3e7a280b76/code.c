#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        arr2[i]=-1;
    }
    for(int i=0;i<n;i++){
        int count=0;
        if(arr2[i]!=-1){
            continue;
        }
        for(int j=0;j<n-1;j++){
            if(arr[j]==arr[i]){
                count++;
                arr2[j]=0;
            }
        }
        arr2[i]=count;
        count=1;

    }
    int max=arr2[0];
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            max=arr[i+1];
            index=i+1;
        }
    }
    if(max>(n/2)){
        printf("%d",arr[index]);

    }
    else{
        printf("-1");
    }
    return 0;
}