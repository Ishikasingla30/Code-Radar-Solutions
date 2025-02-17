#include <stdio.h>
int main() {
    int a, b, c;
    double average;
    scanf("%d %d %d", &a, &b, &c);
    int average = (a + b + c) / 3.0; 
    printf("Average: %d", average);
    return 0;
}