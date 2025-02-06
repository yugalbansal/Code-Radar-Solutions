#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a,sum=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}