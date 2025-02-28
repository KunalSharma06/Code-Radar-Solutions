#include<stdio.h>
int main(){
    int n,m,target = -1;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(int i = 0; i < n; i++){
        if(arr[i] == m){
            target = i;
            break;
        }
    }
    if(target != -1){
        printf("%d",target);
    }else{
        printf("-1");
    }
    return 0;
}