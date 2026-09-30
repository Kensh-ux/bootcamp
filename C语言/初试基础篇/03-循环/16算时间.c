#include <stdio.h>

int main() {
    int s, v;
    scanf("%d %d", &s, &v);
    
    int walk_time = (s + v - 1) / v; 
    
    int minute = 480 - 10 - walk_time;
    
    // 处理跨天（如果时间变成负数，就加上24小时直到为正）
    while (minute < 0) {
        minute += 24 * 60;
    }
    
    int hour = minute / 60;
    int minute_1 = minute % 60;

    printf("%02d:%02d\n", hour, minute_1);
    
    return 0;
}