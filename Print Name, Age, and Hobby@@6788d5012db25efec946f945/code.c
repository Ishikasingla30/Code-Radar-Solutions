#include <stdio.h>
int main() {
    char str1[100], str2[100], str3[100];
    scanf("%s %s %s", &str1, &str2, &str3);
    printf("Name: %s\n", str1);
    printf("Age: %s\n", str2);
    printf("Hobby: %s", str3);
    return 0;
}