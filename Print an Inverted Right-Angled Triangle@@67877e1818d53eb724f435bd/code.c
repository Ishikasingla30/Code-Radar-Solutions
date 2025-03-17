#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Taking input for number of rows

    for (int i = N; i > 0; i--) {  // Loop for each row
        for (int j = 0; j < i; j++) {  // Printing stars in decreasing order
            printf("*");
        }
        printf("\n");  // New line after each row
    }

    return 0;
}
