#include<stdio.h>
#int main(){
    int n,m;
    int max = 0;
    int min = 0;
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