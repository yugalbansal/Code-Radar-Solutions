#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
       scanf("%d",&arr[i]);
    }
    int lcount=0,rcount=0;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>=arr[i]){
            rcount++;
        }
        else if(arr[i]>=arr[i+1]){
            lcount++;
        }
    }
    if(lcount==n-1||rcount==n-1){
        printf("YES");
    
    }
    else{
        printf("NO");
    }

    
   
    return 0;
}
