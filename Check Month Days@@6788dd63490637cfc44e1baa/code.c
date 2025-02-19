#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(a==1 || 3 || 5 || 7 || 8 || 10 || 12) {
        printf("31");
    }
    else if(a==4,6,9,11) {
        printf("30");
    }
    else if(a==2) {
        printf("28");
    }
    else {
        printf("Invalid month");
    }
    return 0;

}