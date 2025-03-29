#include <stdio.h>

void pattern(int n){
    for(int i=1;i<=n;i++){
        // space 
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        // star
        for(int j=1;j<=n;j++){
            printf("%d",j );
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