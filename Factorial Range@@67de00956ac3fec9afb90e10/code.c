int fact(int n){
    if (n < 2) return 1;
    if (n < 0) printf("Invalid range");
    else{
        return n * fact(n-1);
    }
}

int factorialRange(int start,int end){
    for(int i = start; i <= end;i++){
        int res = fact(i);
        printf("%d\n",res);
    }
}