#include <stdio.h>

int main() {
    char str[105];
    scanf("%s", str);
    
    char *p = str;
    
    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            *p = *p - 32;
        }
        p++; 
    }
    
    printf("%s\n", str);
    return 0;
}