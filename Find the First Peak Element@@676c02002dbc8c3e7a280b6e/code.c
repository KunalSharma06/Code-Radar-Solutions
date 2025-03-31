#include<stdio.h>

int check(int arr[], int n) {
    if (arr[0] > arr[1]) {
        printf("%d\n", arr[0]);
        return 1;
    }
    for (int i = 1; i < n-1; i++) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            printf("%d\n", arr[i]);
            return 1;
        }
    }
    if (arr[n-1] > arr[n-2]) {
        printf("%d\n", arr[n-1]);
        return 1; 
    }
    return 0; 
}

int main() {
    int n;
    scanf("%d", &n); 
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = check(arr, n);
    if (result == 0) {
        printf("-1\n");
    }

    return 0;
}
