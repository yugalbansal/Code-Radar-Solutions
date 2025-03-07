// Your code here...
#include <math.h>

int isprime(int a){
    if(a==0 || a==1){
        return 0;
    }
    else{
        for(int i=2;i<=sqrt(a);i++){
            return 0;
        }
        return 1;
    }
}
