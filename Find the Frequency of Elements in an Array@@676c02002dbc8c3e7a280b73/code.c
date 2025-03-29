#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        arr2[i]=-1;
    }
    for (int i = 0; i < n; i++) {
        int count=1;
        if(arr2[i]!=-1){continue;}

        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
                arr[j]=0;
            }
        }
        arr2[i]=count;
    }
    for(int i=0;i<n;i++){
        if(arr2[i]!=0 && arr[i]!=0){

        printf("%d %d\n",arr[i],arr2[i]);
        }
    }


  
    return 0;
}
