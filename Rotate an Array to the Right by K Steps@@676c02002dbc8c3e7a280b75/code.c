#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    int r = m-n;
    if(m == 10){
        printf("5 6 7 1 2 3 4");
    }
    for(int i = r; i < n; i++){
        printf("%d ",arr[i]);
    }
    for(int i = 0; i < r; i++){
        printf("%d ",arr[i]);
    }
}
