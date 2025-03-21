// #include <stdio.h>

// // char* welcome() {
// //     return "Welcome to Code Radar!";
// // }

// int main() {
//     // printf("%s", welcome());
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         for(int j=1;j<i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf(" ");
//         }
//         for(int j=n;j>i;j--){
//             printf("*");
//         }
//         for(int j=n-1;j>i;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Top half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the diamond (N-1 rows)
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

