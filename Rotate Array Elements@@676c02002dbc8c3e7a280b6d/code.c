#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    int arr[a];
    int arr1[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int k;k<a;k++){
        arr1[k]=arr[k];
    }
    for(int i=0;i<a;i++){
        printf("%d",arr1[i]);
    }

    return 0;
}