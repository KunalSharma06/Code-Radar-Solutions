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

    int found = 0;
    for(int i = 0; i < n-1;i++){
        if(arr[i] == arr[i-1]){
            continue;
        }
        for(int j = i+1; j < n; j++){
            if(arr[i]+arr[j] == m){
                printf("%d %d\n",arr[i],arr[j]);
                found = 1;
            }
        }
    }
    return 0;
}