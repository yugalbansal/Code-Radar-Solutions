#include <stdio.h>

int sumdigit(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        printf("%d ",sum(arr[i]));
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
   
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    sum(arr,n);

}