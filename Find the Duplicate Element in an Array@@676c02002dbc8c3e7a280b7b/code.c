#include<stdio.h>
int check(int arr[],int n){
    int duplicate = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                printf("%d",arr[i]);
                duplicate = 1;
                break;
            }
        }
        if(!duplicate){
            printf("");
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
    return 0;
}