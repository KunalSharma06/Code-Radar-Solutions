#include<stdio.h>
int check(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int new = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = new;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    check(arr,n);
    for(int i = 0;i<n-1;i++){
        if(arr[i] % 2 == 0){
            printf("%d",arr[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}