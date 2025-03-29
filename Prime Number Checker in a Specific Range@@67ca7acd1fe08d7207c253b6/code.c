// Your code here...
int isprime(int num){
    if(num==0 || num==1){
        return 0;
    }
    else{
        for(int i=2;i*i<num;i++){
            if(num%i==0){
            return 0;
        }
        }
    }
    return 1;
    
}
int printPrimesInRange(int a,int b){
    for(int num=a;num<=b;num++){
       if(isprime(num)){
        printf("%d ",num);
       }
    }
    }

