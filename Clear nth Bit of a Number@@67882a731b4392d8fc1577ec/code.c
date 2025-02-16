// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c = ~(1<<b)&a;
    printf("%d",c);
    return 0;
}