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
            if(arr[j] == 0){
                int new = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = new;
            }
        }
    }
    for(int i = 0; i < r; i++){
        printf("%d",arr[i]);
    }
    return 0;
}