#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 2) {
        printf("-1\n");
        return 0;
    }
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1]) {
        printf("%d\n", arr[0]);
        free(arr);
        return 0;
    }
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);
            free(arr);
            return 0;
        }
    }
    if (arr[n - 1] > arr[n - 2]) {
        printf("%d\n", arr[n - 1]);
        free(arr);
        return 0;
    }
    printf("-1\n");
    free(arr);
    
    return 0;
}