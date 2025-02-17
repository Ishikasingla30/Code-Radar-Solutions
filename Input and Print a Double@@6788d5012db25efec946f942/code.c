#include <stdio.h>
int main() {
    double num;
    scanf("%1f", &num);
    printf("You entered: %.151f", num);
    return 0;
}