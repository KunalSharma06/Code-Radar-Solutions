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

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    check(arr,n);
    if(n>=2){
        int first = arr[0];
        int second = -1;
        for(int i = 0;i<n;i++){
            if(arr[i] > second){
                second = arr[i];
                break;
            }
        }
    if(second != -1){
        printf("%d",second);
    } else{
        printf("-1");
    }
    }
    return 0;
}