#include<stdio.h>
int main(){

    int ispalindrome(int num){
        int original = num;
        int reversed = num;
        int remainder;
        while(num != 0){
            remainder = num % 10;
            reversed = reversed * 10 + remainder
            num /= 10;
        }
        if(original == reversed){
            return 1;
        } else{
            return 0;
        }
    }

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int count = 0;
    if(ispalindrome(arr[i])){
        count++;
    }
    printf("%d",count);
    return 0;
}