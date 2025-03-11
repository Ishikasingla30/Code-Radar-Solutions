#include<stdio.h>
int main() {
    char al;
    scanf("%c, &al");
    if(al >= 'A' && al<= 'Z') {
        printf("Uppercase");
    }
    else {
        printf("Lowercase");
    }
    return 0;
}