int factorialRange(int n){
    if (n < 2) return 1;
    else{
        return n * factorialRange(n-1);
    }
}

int factorial(int start,int end){
    for(int i = start; i < end;i++){
        int res = factorialRange(i);
        printf("%d",i);
    }
}