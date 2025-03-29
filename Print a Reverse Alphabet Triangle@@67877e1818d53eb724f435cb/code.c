#include <stdio.h>

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(char j=A;j<=A+i;j++){
            printf("%c ",j);
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