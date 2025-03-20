#include<stdio.h>
int check(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
            int new = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = new;
            }
        }
    }
}

int repeat(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1]){
            return arr[i];
        }
    }
     return -1;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n-1; i++){
        scanf("%d",&arr[i]);
    }
    check(arr,n);
    int result = repeat(arr,n);
    if(result != -1){
        printf("%d",result);
    } else{
        printf("-1");
    }
    return 0;
}