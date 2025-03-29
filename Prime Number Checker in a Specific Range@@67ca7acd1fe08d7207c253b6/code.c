int isPrime(int start, int end){
    if(start <= 1){
        return 0;
    } else{
        for(int i = start; i <= end / 2; i++){
            if(start % i == 0){
                return 0;
            }
        }
        return 1;
    }
}

int printPrimesInRange(int a ,int b){
    isPrime(start,end);
    for(int i = a; i < b; i++){
        return i;
    }
}