#include <stdio.h>
int main() {
    char d;
    scanf("%c", &d);
    if(d=='R') {
        printf("Stop");
    }
    else if(d=='G') {
        printf("Go");
    }
    else if(d=='Y') {
        printf("Slow Down");
    }
    else {
        printf("Invalid input");
    }
    return 0;
    
}