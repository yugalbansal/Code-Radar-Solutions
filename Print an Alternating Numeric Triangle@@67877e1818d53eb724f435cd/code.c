// // Your code here...
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         int n=0;
//         for(int j=0;j<i;j++){
//             if(i==1){printf("1");}
//             else{printf("%d ",n+j);}
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num = i % 2; // Start with 0 if i is even, 1 if i is odd
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num; // Toggle between 0 and 1
        }
        printf("\n");
    }

    return 0;
}
