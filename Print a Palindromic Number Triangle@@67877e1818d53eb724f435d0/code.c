#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces for formatting
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        
        printf("\n"); // Move to next line
    }

    return 0;
}
