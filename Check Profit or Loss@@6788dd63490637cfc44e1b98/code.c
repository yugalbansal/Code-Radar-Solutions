#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    b>a?printf("Profit"):a==b?printf("No Profit No Loss"):printf("Loss");
    return 0;
}