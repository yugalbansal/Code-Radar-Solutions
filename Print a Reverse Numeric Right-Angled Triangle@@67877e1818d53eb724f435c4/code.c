#include <stdio.h>

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2n-(2*i+1);j++){
            printf("%d ",j);
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