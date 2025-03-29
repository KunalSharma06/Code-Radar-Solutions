#include<stdio.h>

int main() {
    int n;
    // Read array size
    if(scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    
    int arr[n];
    // Read array elements
    for(int i = 0; i < n; i++) {
        if(scanf("%d", &arr[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }
    
    int m;
    // Read rotation index
    if(scanf("%d", &m) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    
    // Validate rotation index
    if(m < 0 || m >= n) {
        printf("Invalid rotation index\n");
        return 1;
    }
    
    // Print rotated array
    // First elements after m
    for(int i = m; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    // Then elements before m
    for(int i = 0; i < m; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}