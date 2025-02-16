#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    int msb = a >> 31;
    ((a>>31) & 1)?printf("Set"):printf("Not Set");
    return 0;
}