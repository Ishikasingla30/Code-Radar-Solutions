#include <stdio.h>
int main() {
    char day;
    scanf("%c", &day);
    if(day=='R') {
        printf("Stop");
    }
    else if(day=='G') {
        printf("Go");
    }
    else if(day=='Y') {
        printf("Slow Down");
    }
    else {
        printf("Invalid action");
    }
    return 0;
    
}