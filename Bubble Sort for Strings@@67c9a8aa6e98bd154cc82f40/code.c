#include <stdio.h>
#include <string.h>

// Function to perform Bubble Sort on an array of strings
void bubbleSort(char *arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare strings using strcmp
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap the string pointers
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the sorted array of strings
void printArray(char *arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);  // Print the string followed by a space
    }
    printf("\n");  // Print a newline after all strings
}