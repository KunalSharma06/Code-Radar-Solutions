#include<stdio.h>
void sort(int arr[],int n){
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
int seq(int arr[],int n){
    sort(arr,n);
    int count = 1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]==1){
                count++;
            }
        }
    }return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }printf("%d",seq(arr,n));
}