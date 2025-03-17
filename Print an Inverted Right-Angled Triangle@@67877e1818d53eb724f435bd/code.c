#include<stdio.h>
void main() {
    char i, j;
    int rows;
    scanf("%d", rows);
    for(i='*'; i<=rows; i--)
    for(j='*'; j<=i; j++) {
        printf("%c", j);
    }
    printf("\n");
    return 0;

}