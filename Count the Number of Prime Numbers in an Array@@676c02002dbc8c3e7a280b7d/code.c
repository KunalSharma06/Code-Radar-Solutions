#include<stdio.h>
int check(int n){
    if(n <= 1) return 0;
    // if(n == 2) return 1;
    // if(n % 2 == 0) return 0;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int is_prime = 0;
    for(int i = 0; i < n; i++){
        if(check(arr[i])){
            is_prime++;
        }
    }
    printf("%d",is_prime);
    return 0;
}