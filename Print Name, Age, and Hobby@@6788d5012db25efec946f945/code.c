#include <stdio.h>
int main(){
    char a[100],b[100];
    int c;
    scanf("%s %d \n %s",&a,&c,&b);
    printf("Name: %s\n",a);
    printf("Age: %c\n",c);
    printf("Hobby: %s\n",b);
    return 0;
}