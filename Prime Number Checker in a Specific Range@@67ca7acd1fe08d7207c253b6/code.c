int isPrime(int a, int b){
    if(a <= 1){
        return 0;
    } else{
        for(int i = a; i <= b / 2; i++){
            if(a % i == 0){
                return 0;
            }
        }
        return 1;
    }
}

int printPrimesInRange(int a ,int b){
    for(int i = a; i < b; i++){
         isPrime(a,b);
    }
}