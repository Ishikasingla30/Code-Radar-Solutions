#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Taking input: two integers and an operator
    scanf("%d %d %c", &a, &b, &op);

    // Performing operation based on the operator
    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Error\n");  // Handling division by zero
            } else {
                printf("%d\n", a / b);
            }
            break;
        default:
            printf("Error\n");  // Handling invalid operator
    }

    return 0;
}
