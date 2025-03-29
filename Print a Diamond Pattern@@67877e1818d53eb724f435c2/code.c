#include <stdio.h>
#include <stblib.h>

void pattern(int n){
    for(int i=0;i<2*n-1;i++){
        int space = abs(n-i-1);
        int star = 2 * (n-space)+1;
        // space 
        for(int j=1;j<space;j++){
            printf(" ");
        }
        // star
        for(int j=0;j<star;j++){
            
             printf("*");
          
        }
        
        printf("\n");
    }

}

int main(){
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}