#include<stdio.h>

void srtarr(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];  // 'new' was changed to 'temp'
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {  // Fixed loop to go from 0 to n-1
        scanf("%d", &arr[i]);
    }

    srtarr(arr, n);

    // Handle edge case where n == 1
    if (n == 1) {
        printf("-1");
        return 0;
    }

    // Find second largest distinct element
    int first = arr[n - 1];  // The largest element (after sorting)
    int second = -1;

    // Start searching from the second last element
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != first) {
            second = arr[i];
            break;  // Break once the second largest is found
        }
    }

    // If second remains -1, it means no second distinct element was found
    if (second == -1) {
        printf("-1");
    } else {
        printf("%d", second);
    }

    return 0;
}
