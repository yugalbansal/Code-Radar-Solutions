#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
       scanf("%d",&arr[i]);
    }
    int lcount=0,rcount=0;
    for(int i=0;i<n;i++){
        if(arr[i+1]>=arr[i]){
            rcount++;
        }
        if(arr[i+1]<=arr[i]){
            lcount++;
        }
    }
    if(lcount==n||rcount==n){
        printf("YES");
    
    }
    else{
        printf("NO");
    }

    
   
    return 0;
}
