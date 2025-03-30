#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int m;
    scanf("%d", &m);
    
    // Reduce m to be within the bounds of the array length
    m = m % n;

    // Print the rotated array
    for (int i = n - m; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    for (int i = 0; i < n - m; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
