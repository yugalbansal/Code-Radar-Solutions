#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum=0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum/n)
        
    return 0;
}
