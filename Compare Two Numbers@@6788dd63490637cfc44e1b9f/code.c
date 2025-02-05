#include <stdio.h>

int main() {
    // printf("%s", welcome());
    int a,b;
    scanf("%d %d",&a,&b);
    (a==b)?printf("Equal"):(a>b)?printf("First"):printf("Second");
    return 0;
}