// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&n);
    }
    int diff = arr[1]-arr[0];
    int m=1,n=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]<diff){
                diff=arr[j]-arr[i];
                m=j;
                n=i;
            }
        }
    }
    printf("%d %d",arr[j],arr[i]);
}