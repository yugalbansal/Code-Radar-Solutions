#include <stdio.h>

int main() {
    int a, b;
    char op;

    if (scanf("%d %d %c", &a, &b, &op) != 3) {
        printf("error");
        return 1;
    }

   
    if (op == '+') {
        printf("%d\n", a + b);
    } 
    else if (op == '-') {
        printf("%d\n", a - b);
    } 
    else if (op == '*') {
        printf("%d\n", a * b);
    } 
    else if (op == '/') {
        if (b == 0) {
            printf("error");
        } else {
            printf("%d\n", a / b);
        }
    } 
    else {
        printf("error");
    }

    return 0;
}
