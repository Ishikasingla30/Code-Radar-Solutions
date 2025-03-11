#include <stdio.h>

int main() {
    int num;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check LSB using bitwise AND operator
    if (num & 1)
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
