#include <stdio.h>
int main() {
    int x;
    int one, two, five;
    int exit = 0;    // 核心标志变量：0表示未找到解，1表示已找到要退出
    
    scanf("%d", &x);
    for ( one = 1; one < x*10; one++ ) {
        for ( two = 1; two < x*10/2; two++ ) {
            for ( five = 1; five < x*10/5; five++ ) {
                if ( one + two*2 + five*5 == x*10 ) {
                    printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", one, two, five, x);
                    exit = 1;     // 1. 把接力棒（退出信号）传给外层
                    break;        // 2. 跳出当前最内层循环
                }
            }
            // 3. 中层循环检查接力棒！如果内层已经退出，我也要退出
            if ( exit == 1 ) break; 
        }
        // 4. 外层循环检查接力棒！如果中内层已经退出，我也要退出
        if ( exit == 1 ) break; 
    }
    return 0;
}