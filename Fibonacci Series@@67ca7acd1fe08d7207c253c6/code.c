int fibonacciSeries(int n){
    if(n <= 2) return 1;
    int a = 1; b = 1;
    int next;
    for(int i = 3; i <= n; i++){
        next = a+b;
        a = b;
        b = next;
    }
    return b;
}