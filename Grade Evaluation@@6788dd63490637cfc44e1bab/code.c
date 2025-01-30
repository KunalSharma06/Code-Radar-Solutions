#include <stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    if(n == 'A'){
        printf("Excellent");
    } else if(ch == 'B'){
        printf("Good");
    } else if(ch == 'C'){
        printf("Average");
    } else if(ch == 'D'){
        printf("Below Average");
    } else if(ch == "F"){
        printf("Fail");
    } else{
        printf("Invalid grade");
    }
    return 0;
}