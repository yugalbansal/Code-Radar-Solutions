// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf('%d %d',&a,&b);
    int c = ~(a>>b)&1;
    printf("%u",c);
    return 0;
}