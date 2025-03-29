#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int i = 0;
    for(int i = n; i >= 0; i--){
        i = arr[i];
    }
    printf("%d",i);

}
