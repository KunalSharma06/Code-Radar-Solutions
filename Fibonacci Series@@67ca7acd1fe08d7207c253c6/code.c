int fibonacciSeries(int n,int a, int b,int next){
    if(n <= 2) return 1;
    a = 1; b = 1; next;
    for(int i = 3; i <= n; i++){
        next = a+b;
        a = b;
        b = next;
    }
    return b;
}