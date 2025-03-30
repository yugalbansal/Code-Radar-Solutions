// Your code here...// Your code here...
// Your code here...
#include <stdio.h>
int even(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]){
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
   int result=even(arr,n);
   printf("%d",result);
}