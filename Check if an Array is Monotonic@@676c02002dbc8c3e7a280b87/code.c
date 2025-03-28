#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    int arr[r];
    for(int i = 0; i < r; i++){
        scanf("%d",&arr[i]);
    }
    int increase = 1;
    int decrease = 1;
    for(int i = 0; i < r; i++){
        if(arr[i] < arr[i+1]){
            increase = 0;
        }
        if(arr[i] > arr[i+1] && arr[i+1] > arr[i+2]){
            decrease = 1;
        }
    }
    if(increase || decrease){
        printf("YES");
    } else{
        printf("NO");
    }

    return 0;
}