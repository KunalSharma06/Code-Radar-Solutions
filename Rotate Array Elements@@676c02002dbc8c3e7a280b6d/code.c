#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d\n",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    int start = m+1;
    int end = n-1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i = 0; i < n; i++){
        printf("%d\n",arr[i]);
    }
}