#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int evenArr[n], evenCount = 0,num;
    for (int i = 0; i < n; i++) {
        scanf("%d",&num);
        if (num % 2 == 0) {
            evenArr[evenCount++] = num;  
        }
    }
    if (evenCount == 0) {
        printf("-1");
    }
    else{
    int max = evenArr[0];
    for (int i = 1; i < evenCount; i++) {
        if (evenArr[i] > max) {
            max = evenArr[i];
        }
    }
    printf("%d\n", max);
    }
    
    return 0;
}
