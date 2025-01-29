#include <stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    if(n >= "A" && n <= "Z"){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}