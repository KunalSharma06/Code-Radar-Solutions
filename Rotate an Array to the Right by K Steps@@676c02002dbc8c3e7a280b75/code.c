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
    int r = m-n;
    for(int i = r+1; i < n; i++){
        printf("%d ",arr[i]);
    }
    for(int i = 0; i < r; i++){
        printf("%d ",arr[i]);
    }
    // if(m == 10){
    //     printf("")
    // }
}