#include <stdio.h>
int main() {
    char day;
    scanf("%c", &day);
    if(day=='A') {
        printf("Excellent");
    }
    else if(day=='B') {
        printf("Good");
    }
    else if(day=='C') {
        printf("Average");
    }
    else if(day=='D') {
        printf("Below Average");
    }
    else if(day=='E') {
        printf("Fail");
    }
    else {
        printf("Invalid grade");
    }
    return 0;
    
}