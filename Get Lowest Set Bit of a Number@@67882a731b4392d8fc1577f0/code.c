// Your code here...
// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int position=0;
    while((a&1)==0){
        n>>=1;
        position+=1;
    }
    printf("%d", position);
    return 0;
}