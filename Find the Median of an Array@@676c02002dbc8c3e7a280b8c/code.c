#include<stdio.h>
int check(int arr[],int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[i] > arr[i+1]){
                int new = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = new;
            }
        }
    }
}

int find(int arr[],int n){
    check(arr,n);
    if(n % 2 != 0){
        return arr[n/2]; 
    } else{
        return (arr[(n-1)/2] + arr[n/2]) / 2;
    }
    int median = find(arr,n);
    printf("%d",median);
    return 0;
}