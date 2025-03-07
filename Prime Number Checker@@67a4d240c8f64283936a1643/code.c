// Your code here...

int isPrime(int a){
    if(a==0 || a==1){
        return 1;
    }
    else{
        for(int i=2;i*i<=a;i++){
            return 0;
        }
        return 1;
    }
}
