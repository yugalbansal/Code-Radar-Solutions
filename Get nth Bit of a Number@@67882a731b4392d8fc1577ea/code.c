// Your code here...
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c =a & (1u<<b);
    printf("%d",c);
    return 0;
}