#include<stdio.h>
int check(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
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
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    check(arr,n);
    int result1 = arr[n-1] * arr[n-2];
    int result2 = arr[0] * arr[1];
    int result = (result1 > result2) ? result1 : result2;
    printf("%d",result);
    return 0;
}