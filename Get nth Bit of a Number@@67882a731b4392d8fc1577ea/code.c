// Your code here...
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a & (1u<<b));
    return 0;
}