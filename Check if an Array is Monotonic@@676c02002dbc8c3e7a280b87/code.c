#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    int arr[r];
    for(int i = 0; i < r; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < r-1; i++){
        for(int j = 0; j < r-i-1; j++){
            if(arr[j] > arr[j+1] || arr[j] < arr[j+1]){
                printf("yes");
            }
        }
    }
    return 0;
}