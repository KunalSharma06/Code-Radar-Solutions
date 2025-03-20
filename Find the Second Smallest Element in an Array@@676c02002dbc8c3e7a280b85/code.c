#include<stdio.h>
int check(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int new = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = new;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    check(arr,n);
    if(n<2){
        printf("-1");
    }
    printf("%d\n",arr[1]);
    return 0;#include<stdio.h>

int check(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);  // Read number of elements in the array
    
    if (n < 2) {
        printf("-1\n");  // If there are less than 2 elements, print -1
        return 0;
    }

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element
    }

    check(arr, n);  // Sort the array
    
    // After sorting, the second smallest element will be at index 1
    printf("%d\n", arr[1]);  // Print the second smallest element
    return 0;
}

}