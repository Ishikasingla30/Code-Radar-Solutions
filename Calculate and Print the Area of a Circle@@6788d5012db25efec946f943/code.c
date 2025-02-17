#include <stdio.h>
int main() {
    float radius;
    scanf("%f", &radius);
    float Area = 3.14 * radius * radius;
    printf("Area: %.2f", Area);
    return 0;  
}