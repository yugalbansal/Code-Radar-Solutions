#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int d;
    scanf("%d",&d);
    char *day[]={"Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday","Sunday"};
    printf("%c",day[d-1]);
    return 0;
}