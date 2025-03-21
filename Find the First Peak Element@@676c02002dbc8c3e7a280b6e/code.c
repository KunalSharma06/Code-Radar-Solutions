#include<stdio.h>

int check(int arr[], int n) {
    // Check if the first element is a peak
    if (arr[0] > arr[1]) {
        printf("%d\n", arr[0]);
        return 1; // Found a peak
    }

    // Check for peaks in the middle elements
    for (int i = 1; i < n-1; i++) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            printf("%d\n", arr[i]);
            return 1; // Found a peak
        }
    }

    // Check if the last element is a peak
    if (arr[n-1] > arr[n-2]) {
        printf("%d\n", arr[n-1]);
        return 1; // Found a peak
    }

    // If no peak is found
    return 0; // No peak found
}

int main() {
    int n;
    scanf("%d", &n);  // Input the number of elements
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the check function to find the first peak
    int result = check(arr, n);

    // If no peak was found, print -1
    if (result == 0) {
        printf("-1\n");
    }

    return 0;
}
