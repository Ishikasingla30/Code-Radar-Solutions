#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==c && b==a && c==b) {
        printf("Equilateral");
    }
    if(a==c || b==a && c==b) {
        printf("isosceles");
    }
    else {
        printf("Scalene");
    }
    return 0;
}  