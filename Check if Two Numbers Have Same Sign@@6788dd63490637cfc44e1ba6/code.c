#include <stdio.h>

int main() {
    // printf("%s", welcome());
    int a,b;
    scanf("%d %d",&a,&b);
    (a>0&&b>0)?printf("Same Sign"):(a<0 && b<0)?printf("Same Sign"):printf("Different Sign");
    return 0;
}