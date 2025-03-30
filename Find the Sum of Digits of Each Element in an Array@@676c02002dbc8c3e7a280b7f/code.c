#include <stdio.h>

int sumdigit(int n){
    int sums=0;
    while(n!=0){
        sums+=n%10;
        n/=10;
    }
    return sums;
}

int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        printf("%d ",sumdigit(arr[i]));
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