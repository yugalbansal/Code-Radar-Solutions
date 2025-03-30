#include <stdio.h>

int main() {
    int n,k;
    scanf("%d",&n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
        
    }
    int a,b;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(arr[i]==-1) continue;
        for(int j=i+1;j<n;j++){
        if(arr[j]==-1) continue;
            if(arr[i]+arr[j]==k){
                printf("%d %d\n",arr[i],arr[j]);
                for (int m = 0; m < n; m++) {
                    if (arr[m] == arr[i] || arr[m] == arr[j]) {
                        arr[m] = -1;  // Mark as removed
                    }
                }

            }
        }
    }
    
    return 0;
}
