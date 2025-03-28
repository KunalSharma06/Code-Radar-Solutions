#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == m){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}