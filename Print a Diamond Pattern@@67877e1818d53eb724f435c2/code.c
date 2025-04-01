#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i;j++){
            printf(" ");
        }for(int k=1;k<=2*i-1;k++){
            printf("*");
        }printf("\n");
    }for(int l=n-1;l>=1;l--){
        for(int m=n;m>l;m--){
            printf(" ");
        } 
        for(int p=1;p<=2*l-1;p++){
            printf("*");
        }printf("\n");
    }
    return 0;
}