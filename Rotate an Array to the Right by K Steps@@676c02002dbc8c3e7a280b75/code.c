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
    int r = n-m;
    for(int i = r; i < n; i++){
        printf("%d ",arr[i]);
    }
    for(int i = 0; i < r; i++){
        printf("%d",arr[i]);
    }
}