#include<stdio.h>

int main() {
    int arr[7];
    
    // Input the array elements
    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the first element is a peak
    if (arr[0] > arr[1]) {
        printf("%d", arr[0]);
        return 0;
    }

    // Check if the last element is a peak
    if (arr[6] > arr[5]) {
        printf("%d", arr[6]);
        return 0;
    }

    // Check for peaks in the middle elements
    for (int i = 1; i < 6; i++) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            printf("%d", arr[i]);
            return 0;
        }
    }

    // If no peak is found
    printf("-1");
    return 0;
}
