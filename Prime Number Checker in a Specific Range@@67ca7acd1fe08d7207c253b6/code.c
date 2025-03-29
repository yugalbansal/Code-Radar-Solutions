// Your code here...
int isprime(int num){
    if(num==0 || num==1){
        return 0;
    }
    else{
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
            return 0;
        }
        }
    }
    return 1;
    
}
int printPrimesInRange(int a,int b){
    int found=0;
    if(a<0){
        a=0;
    }
    for(int num=a;num<=b;num++){
       if(isprime(num)){
        printf("%d ",num);
        found=1;
       }
    }
    if(!found){
        printf("No prime numbers");
    }
    }

