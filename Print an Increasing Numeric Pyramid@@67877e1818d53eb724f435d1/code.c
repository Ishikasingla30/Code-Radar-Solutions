#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input: number of rows

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" %d ", j);  // Print numbers from 1 to i
        }
        printf("\n");  // New line after each row
    }

    return 0;
}
