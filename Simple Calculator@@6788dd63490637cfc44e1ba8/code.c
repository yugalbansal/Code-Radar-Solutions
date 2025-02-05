#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    // Input two numbers and an operator
    printf("Enter two numbers and an operator (e.g., 5 3 +): ");

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
           
                printf("%d\n", a / b);
        
            break;
        default:
            printf("Error\n");
    }

    return 0;
}
