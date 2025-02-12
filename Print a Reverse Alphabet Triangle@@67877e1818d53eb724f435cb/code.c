// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char ch='A';
    for(int i=1;i<=a;i++){
        for(int j=a;j>=i;j--){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}