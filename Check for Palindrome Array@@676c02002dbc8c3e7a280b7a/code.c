#include <stdio.h>

int ispallindrome(int n){
    int a=n,digit,rev=0;
    while(a>0){
        digit = a%10;
        rev=rev*10+digit;
        a/=10;
    }
    return rev==n;
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
    int number=0,dig;
    for(int i=0;i<n;i++){
        dig=arr[i];
        number=number%10+dig;
    } 
    if(ispallindrome(number)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}