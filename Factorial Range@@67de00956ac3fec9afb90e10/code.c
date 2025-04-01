int fact(int n){
    if (n < 0){
       return -1;
    }
    if (n < 2) return 1;
    else{
        return n * fact(n-1);
    }
}

int factorialRange(int start,int end){
    if((start < 0 || end < 0) && (start > end)){
        printf("Invalid range");
        return 0;
    }
    for(int i = start; i <= end;i++){
        int res = fact(i);
        if(res != -1){
        printf("%d\n",res);
        }
    }
}