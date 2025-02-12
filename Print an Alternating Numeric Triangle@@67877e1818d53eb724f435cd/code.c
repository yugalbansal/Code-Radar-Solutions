// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int n=0;
        for(int j=0;j<i;j++){
            if(i==1){printf("1");}
            else{printf("%d ",n+j);}
        }
        printf("\n");
    }
}