#include<stdio.h>
int main(){
    int n,m;
    int odd = 0;
    int even = 0;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d ",&m);
        if(m % 2 == 0){
            even++;
        } else{
            odd++;
        }
    }
    printf("%d %d",even, odd);
    return 0;
}