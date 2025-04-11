#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    int mask = 1 << n;
    int bit = (num & mask) ? 1 : 0;
    printf("%d\n", bit);
    
    return 0;
}