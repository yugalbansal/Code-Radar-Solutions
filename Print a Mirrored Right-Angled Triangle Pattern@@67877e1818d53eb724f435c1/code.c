#include <stdio.h>

void pattern(int n){
    for(int i=0;i<n;i++){
        // space 
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        // star
        for(int j=0;j<=i;j++){
            printf("*");
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