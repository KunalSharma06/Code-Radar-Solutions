#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("%d\n",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    for(int i = n-1; i >= 0; i--){
        printf("%d\n",arr[i]);
    }
}