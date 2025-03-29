int fibonacciSeries(int n){
    if(n == 1) printf("0 ");
    if(n == 2) printf("1");
    int a = 0, b = 1;
    int next;
    for(int i = 2; i <= n; i++){
        next = a+b;
        printf("%d ",next);
        a = b;
        b = next;
        // printf("%d ",a);
        // printf("%d ",b);
    }
}