#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int d;
    scanf("%d",&d);
    char *day[]={"Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday","Sunday"};
    if(d>=1 && d<=7)
    printf("%s",day[d-1]);
    else
    printf("Invalid");
    return 0;
}