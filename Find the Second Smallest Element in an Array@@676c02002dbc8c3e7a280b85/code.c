#include<stdio.h>
int check(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int new = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = new;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    check(arr,n);
    int first = arr[0];
    int second_found = 0;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] != first) {
            printf("%d\n", arr[i]);
            // second_found = 1;
            break;
        }
    }
    if (!second_found) {
        printf("-1\n");
    }
    return 0;
}