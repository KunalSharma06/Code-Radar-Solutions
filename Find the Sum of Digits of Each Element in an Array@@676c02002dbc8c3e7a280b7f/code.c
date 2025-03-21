#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i <= n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i <= n; i++){
        int num = arr[i];
        int k = 0;
        while(num > 0){
            k += num % 10;
            num = num / 10;
        }
        printf("%d",k);
    }
    return 0;

}