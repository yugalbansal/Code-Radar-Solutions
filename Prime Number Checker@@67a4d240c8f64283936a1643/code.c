// Your code here...

int isPrime(int a){
    if(a==0 || a==1){
        return 0;
    }
    else{
        for(int i=2;i*i<=a;i++){
            if(a%i==0)
            return 0;
        }
        return 1;
    }
}
