#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        for (j = 2; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
