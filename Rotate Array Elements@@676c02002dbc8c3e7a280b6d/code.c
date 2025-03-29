#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    for(int i = n; i >= 0; i--){
        printf("%d",arr[i]);
    }
}