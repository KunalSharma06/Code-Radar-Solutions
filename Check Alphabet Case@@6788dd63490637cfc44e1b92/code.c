#include <stdio.h>
int main(){
    char ch = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char n;
    scanf("%c",&n);
    if(n == ch){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}