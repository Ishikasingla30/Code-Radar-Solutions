#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==c && b==a && c==b) {
        printf("Equilateral");
    }
    else if(a!=c && b!=a && c!=b) {
        printf("Scalene");
    }
    else {
        printf("Isosceles");
    }
    return 0;
}  