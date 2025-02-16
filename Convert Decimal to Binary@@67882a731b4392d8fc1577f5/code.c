#include <stdio.h>

void dec(int n){
    if(n>1) dec(n/2);
    printf("%d",n%2);
}
int main(){
    int n;
    scanf("%d",&n);
    dec(n);
    return 0;
}