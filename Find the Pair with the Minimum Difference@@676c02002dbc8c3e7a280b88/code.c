// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int diff = arr[1]-arr[0];
    int m=1,p=0;
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] <= diff) {
            diff = arr[i] - arr[i - 1];
            m = i;
            p = i - 1;
        }
    }
    printf("%d %d",arr[m],arr[p]);
}