#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }
    return 0;
}