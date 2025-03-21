#include<stdio.h>
int check(int arr[],int n){
    int element = n/2;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count>element){
            printf("%d",arr[i]);
            break;
        } else{
             printf("-1");
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