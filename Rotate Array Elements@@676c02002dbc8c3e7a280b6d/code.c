#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    for(int i = n-1; i > m+1; i--){
        printf("%d\n",arr[i]);
    }
    for(int i = 0; i <= m; i++){
        printf("%d\n",arr[i]);
    }
}