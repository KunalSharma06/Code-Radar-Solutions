int fact(int n){
    if (n < 2) return 1;
    else{
        return n * fact(n-1);
    }
}

int factorialRange(int start,int end){
    if((start < 0 || start > end)){
        printf("Invalid range");
        return 0;
    }
    for(int i = start; i <= end;i++){
        int res = fact(i);
        printf("%d\n",res);
    }
}