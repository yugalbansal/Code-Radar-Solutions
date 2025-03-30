#include <stdio.h>
int even(int arr[],int even[],int n){
    int e;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenArr[i]=arr[i]
        }
    } 
    for(int i=0;i<n;i++){
        max=evenArr[0];
        if(evenArr[i]>max){
            max=evenArr[i];
        }
    }
    return max;      
}  
    
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int evenArr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int result=even(arr,n);
   (result>0)?printf("%d",result):printf("-1");
}