// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k,index=-1;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            index =i;
            break;
        }
    }
    if(index>=0){
        printf("%d",index);
    }
    else{
        printf("-1");
    }
   
}