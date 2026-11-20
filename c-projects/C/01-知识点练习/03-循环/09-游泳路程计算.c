#include <stdio.h>

int main() {
    float target;
    scanf("%f", &target);
    
    float distance = 0.0;
    float step = 2.0;
    int i = 0;            
    
    while (distance < target) {
        distance += step;  
        i++;               
        step = step * 0.98; 
    }
    
    printf("%d", i);
    return 0;
}