#include<stdio.h>
int bubbleSort(int arr[],int n){
    for(int i = 0; i < n-1; i++){
        for(int i = 0; i < n-i-1; i++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int printArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}

