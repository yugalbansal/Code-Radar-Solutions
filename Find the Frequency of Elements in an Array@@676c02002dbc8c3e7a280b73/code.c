#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int arr2[1000];
    for (int i = 0; i < n; i++) {
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
                arr[j]=0;
            }
        }
        arr2[i]=count;
    }
    for(int i=0;i<n;i++){
        printf("%d %d\n",arr[i],arr2[i]);
    }


  
    return 0;
}
