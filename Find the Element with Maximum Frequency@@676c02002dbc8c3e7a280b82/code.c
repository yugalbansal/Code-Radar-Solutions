// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(int i=0;i<n;i++){
        int count =1;
        if(freq[i]!=-1){continue;}
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
                freq[j]=0;
            }
        }
        freq[i]=count;
        count=1;
    }
    int index=0;
    for(int i=0;i<n;i++){
        int max=freq[0];
        if(freq[i]>=max){
            max=arr[i];
            index=i;
        }
    }
    printf("%d",arr[index]);
}