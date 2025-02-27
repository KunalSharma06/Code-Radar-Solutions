#include<stdio.h>
#include<limits.h>
int main(){
    int n,m;
    int max = INT_MIN;
    int min = INT_MAX;
    scanf("%d",&n);
    for(int i = 1;i <= n; i++){
        scanf("%d",&m);
        if(m > max){
            max = m;
        }
        if(m < max){
            min = m;
        }
    }
    printf("%d %d",min , max);
    return 0;
}