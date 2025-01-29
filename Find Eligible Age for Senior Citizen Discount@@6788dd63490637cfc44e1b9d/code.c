#include <stdio.h>
int main(){
    int n;
    switch(n >= 60) {
        case 1:
            printf("Eligible");
            break;
        default:
            printf("Not Eligible");
            break;
    }
    return 0;
}