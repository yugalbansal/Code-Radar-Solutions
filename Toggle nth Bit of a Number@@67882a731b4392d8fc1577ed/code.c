// Your code here...// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf('%d %d',&a,&b);
    int c= (a>>b)^a;
    printf("%d",&a);
    return 0;
}