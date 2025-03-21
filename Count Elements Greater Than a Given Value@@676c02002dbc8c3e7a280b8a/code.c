#include<stdio.h>
int check(int arr[],int n, int x){
    int max = 0;
    for(int i = 0; i < n-1;i++){
        if(arr[i] > x){
            max++;
        }
    }
    printf("%d",max);
}

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    check(arr,n);
    return 0;
}