#include <stdio.h>

int prime(int n){
    if(n==1 || n==0){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int isPrime(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(prime(arr[i])){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
   
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
   int result=isPrime(arr,n);
   printf("%d",result);
}