#include <stdio.h>

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    (a>0)?printf("Positive"):(a<0)?printf("Negative"):printf("Zero");
    return 0;
}