#include<stdio.h>
int check(int arr[],int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])){
                printf("%d",arr[i]);
                break;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i <= n; i++){
        scanf("%d",&arr[i]);
    }
    check(arr,n);
    return 0;
}