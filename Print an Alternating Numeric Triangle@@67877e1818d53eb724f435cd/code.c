#include <stdio.h>

void pattern(int n){
    for(int i=0;i<n;i++){
        int flip = (i%2==0)?1:0;
        for(int j=0;j<=i;j++){
            printf("%d ",flip);
            flip=1-flip;
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}