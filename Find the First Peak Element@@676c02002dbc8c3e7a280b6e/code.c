#include<stdio.h>
int main(){
    int n,m;
    int max = 0;
    scnaf("%d",&n);
    for(int i = 1;i <= 7;i++){
        scanf("%d",&m);
        if (m > max){
            max = m;
        }
    }
    printf("%d",max);
    return 0;
}