// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int r = __builtin_ctz(a);
    printf("%d",r);
    return 0;
}