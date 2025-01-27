#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    if(a < b){
        printf("True");
    }else if(b < a){
        printf("False");
    }
    return 0;
}