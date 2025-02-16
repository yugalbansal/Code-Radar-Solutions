// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int c = __builtin_ctz(a);
    printf("%d",c);

    return 0;
}