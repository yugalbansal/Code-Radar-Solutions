#include <stdio.h>

int main() {
    int a, b;
    char op;

    if (scanf("%d %d %c", &a, &b, &op) != 3) {
        printf("Error");
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
            printf("Error");
        } else {
            printf("%d\n", a / b);
        }
    } 
    else {
        printf("Error");
    }

    return 0;
}
