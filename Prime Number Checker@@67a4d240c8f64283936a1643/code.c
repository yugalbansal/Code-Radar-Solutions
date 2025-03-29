int isPrime(int num){
    if(num==0 || num==1){
        return 1;
    }
    for(int i=0;i*i<num;i++){
        if(num%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}