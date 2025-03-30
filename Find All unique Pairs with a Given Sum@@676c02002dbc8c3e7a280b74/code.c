#include <stdio.h>

int main() {
    int n,k;
    scanf("%d",&n);
    
    int arr[n],used[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
        used[i]=0;
        
    }
    int a,b;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(used[i]) continue;
        for(int j=i+1;j<n;j++){
        if(used[j]) continue;
            if(arr[i]+arr[j]==k){
                printf("%d %d\n",arr[i],arr[j]);
                for (int m = 0; m < n; m++) {
                    if (arr[m] == arr[i] || arr[m] == arr[j]) {
                        used[m] = 1;
                    }
                }
                break;  // Move to the next unique number
            }
        }
    }
    
    return 0;
}
