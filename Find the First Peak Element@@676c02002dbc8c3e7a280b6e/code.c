#include<stdio.h>
int main() {
    int arr[7];
    
    // Input the sequence of 7 elements
    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for the first peak element
    for (int i = 1; i < 6; i++) {  // We start from 1 and stop at 5 to avoid out-of-bound
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            printf("%d", arr[i]);
            return 0;  // Stop after printing the first peak element
        }
    }

    // If no peak is found, print -1
    printf("-1");

    return 0;
}
