
int insertionSort(int arr[],int n){
    for(int i = 1; i <= n-1; i++){
        int j = i;
        while(j > 0 && (arr[j] < arr[j-1])){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

int printArray(int arr[],int n){
     for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}