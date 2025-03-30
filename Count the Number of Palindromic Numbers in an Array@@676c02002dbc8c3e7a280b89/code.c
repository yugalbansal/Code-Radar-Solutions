// Your code here...// Your code here...
// Your code here...
#include <stdio.h>

int ispallindrome(int n){
    int a=n,digit,rev=0;
    while(a!=0){
        digit = a%10;
        rev=rev*10+digit;
        a/=10;
    }
    return rev==n;
}

int pallindrome(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(ispallindrome(arr[i])){
            count++;
        }
    } 
    return count;      
}  
    
   


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
   int result=pallindrome(arr,n);
   printf("%d",result);
}