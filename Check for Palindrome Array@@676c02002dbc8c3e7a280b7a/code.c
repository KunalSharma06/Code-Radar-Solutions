#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int reverse[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        reverse[i] = arr[n-i-1];
    }
    int palindrome = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] != reverse[i]){
            palindrome = 0;
            break;
        }
    }
    if(palindrome){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}
