int fact(int n){
    if (n < 0){
        printf("Invalid range");
    }
    else if (n < 2) return 1;
    else{
        return n * fact(n-1);
    }
}

int factorialRange(int start,int end){
    for(int i = start; i <= end;i++){
        int res = fact(i);
        if(res != -1){
        printf("%d\n",res);
        }
    }
}