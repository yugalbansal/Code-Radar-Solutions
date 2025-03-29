#include <stdio.h>

void pattern(int n){
    for(int i=1;i<=n;i++){
            int a=1;
        for(char j=0;j<i;j++){
            printf("%d ",a);
            a++;
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