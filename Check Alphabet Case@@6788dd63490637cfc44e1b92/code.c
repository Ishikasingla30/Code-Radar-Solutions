#include<stdio.h>
int main() {
    char al;
    scanf("%c, &al");
    if(al >= 'A' && al<= 'Z') {
        printf("Uppercase");
    }
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase\n");
    else
        printf("Not an alphabet\n");
    return 0;
}