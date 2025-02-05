#include <stdio.h>

int main() {
    // printf("%s", welcome());
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    (a==b && a==c)?printf("Equilateral"):(a==b||a==c)?printf("Isosceles"):printf("Scalene");
    return 0;
}