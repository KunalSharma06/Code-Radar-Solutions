int isPrime(int n){
    if(n <= 1){
        return 0;
    } else{
        for(int i = 2; i <= n / 2; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
}

int printPrimesInRange(int a ,int b){
    int found = 0;
    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            printf("%d ",i);
            found = 1;
        }
    }
    if(!found){
        printf("No prime numbers");
    }
}