#include<stdio.h>
int bubbleSort(int arr[],int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int kthSmallest(int arr[], int n, int k){
    bubbleSort(arr,n);
    arr[k-1] = -1;
    for(int i = 0; i < n; i++){
        return arr[k-1];
    }
}