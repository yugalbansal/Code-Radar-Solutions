#include <stdio.h>

void pattern(int n){
    for(int i=1;i<=n;i++){
        // space 
        for(int j=0;j<i;j++){
            printf(" ");
        }

        // star 

        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        // space
        for(int j=0;j<i;j++){
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