#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    // Input array - removed \n from scanf
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Removed \n here
    }
    
    int m;
    scanf("%d", &m); // Rotation index
    
    // Validate m
    if(m < 0 || m >= n) {
        printf("Invalid index\n");
        return 0;
    }
    
    // Print rotated array
    // First elements after m
    for(int i = m+1; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    // Then elements before and including m
    for(int i = 0; i <= m; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}