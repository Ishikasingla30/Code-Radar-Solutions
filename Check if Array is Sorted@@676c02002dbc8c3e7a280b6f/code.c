#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // Handle edge case: an array with 0 or 1 element is always sorted
    if (n <= 1) {
        printf("Sorted\n");
        return 0;
    }
    
    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Check if the array is sorted in non-decreasing order
    int isSorted = 1;  // Assume array is sorted initially
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0;  // Array is not sorted
            break;
        }
    }
    
    // Output the result
    if (isSorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
    
    // Free allocated memory
    free(arr);
    
    return 0;
}