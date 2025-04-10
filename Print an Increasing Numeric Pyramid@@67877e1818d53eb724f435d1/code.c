#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read number of rows

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }

        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");  // New line after each row
    }

    return 0;
}
