#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
      for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    if(n%2==0){
        for(int i=1;i<=n/2;i++){
            if(arr[i-1]==arr[n-i]){
            count++;
            }
        }
    }
    else{
        for(int i=1;i<=(n-1)/2;i++){
            if(arr[i-1]==arr[n-i]){
                count++;
            }
        }
    }
    if(n/2==count){
        printf("YES");
    }
    else{
        printf("NO");
    }
}