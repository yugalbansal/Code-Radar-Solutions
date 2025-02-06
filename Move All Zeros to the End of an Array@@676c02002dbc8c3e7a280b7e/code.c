#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int n;
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(int i=1;i<=n;i++){

    scanf("%d",&arr[i]);
    }
    for(int b=1;b<=n;b++){
        if(arr[b]==0){
            arr1[b]=b;
        }
    }
    for(int c=1;c<=n;c++){
        printf("%d ",arr1[c]);
    }

    return 0;
}