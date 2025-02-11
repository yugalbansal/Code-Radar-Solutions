#include <stdio.h>

int main() {
    // printf("%s", welcome());
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}