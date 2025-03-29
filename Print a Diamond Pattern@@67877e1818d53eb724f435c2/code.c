#include <stdio.h>

void pattern(int n){
    for(int i=0;i<2*n-1;i++){
        // space 
        for(int j=1;j<n-i+1;j++){
            printf(" ");
        }
        // star
        for(int j=0;j<=2*i+1;j++){
            printf("*");
        }
        // space
        for(int j=1;j<n-i+1;j++){
            printf(" ");
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