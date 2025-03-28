#include<stdio.h>
int check(int arr[],int n){
    for(int i = 0; i < n-1;i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    check(arr,n);
    int min_diff = arr[1] - arr[0];
    int first = arr[0];
    int second = arr[1];
    for(int i = 0; i < n-1; i++){
        int diff = arr[i+1] - arr[i];
        if(diff < min_diff){
            min_diff = diff;
            first = arr[i];
            second = arr[i+1];
        }
    }
    printf("%d %d",first,second);
    return 0;
}