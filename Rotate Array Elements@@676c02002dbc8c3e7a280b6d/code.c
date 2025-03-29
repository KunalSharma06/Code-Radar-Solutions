#include <stdio.h>

int main() {
    int n, m;
    
    // Input size of array
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the index m to start rotation
    scanf("%d", &m);
    
    // Ensure m is within bounds (0 <= m < n)
    if (m >= n || m < 0) {
        printf("Invalid index m.\n");
        return 1;
    }

    // Print the array from index m+1 to the end
    for (int i = m + 1; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    // Print the array from index 0 to m
    for (int i = 0; i <= m; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
