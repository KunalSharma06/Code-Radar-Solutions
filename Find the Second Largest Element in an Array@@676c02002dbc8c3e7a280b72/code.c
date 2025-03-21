#include<stdio.h>

void srtarr(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];  
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
    for (int i = 0; i < n; i++) { 
        scanf("%d", &arr[i]);
    }

    srtarr(arr, n);
    if (n == 1) {
        printf("-1");
        return 0;
    }
    int first = arr[n - 1];
    int second = -1;
    for (int i = 0; i <= n-2; i++) {
        if (arr[i] != first) {
            second = arr[i];
            break;
        }
    }
    if (second == -1) {
        printf("-1");
    } else {
        printf("%d", second);
    }

    return 0;
}
