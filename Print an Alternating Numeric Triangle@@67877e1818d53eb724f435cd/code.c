#include <stdio.h>

void pattern(int n){
    int start=1;
    for(int i=0;i<n;i++){
        int flip = 1;
        if(i%2==0){
        for(int j=0;j<i;j++){
            printf("%d",flip);
            flip=flip-start;

        }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}