#include <stdio.h>
int main() {
    int a, b;
    scanf("%d", &a);
    if(a>0 && b>0) {
        printf("Same Sign");
    }
    else if( a<0 && b<0) {
        printf("Same Sign");
    }
    else if(a<0 && b>0){
        printf("Not Same Sign");
    }
    else {
        printf("Not Same Sign");
    }
    return 0;
}