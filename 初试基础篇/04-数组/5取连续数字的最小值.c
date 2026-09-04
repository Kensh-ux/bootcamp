#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int number[3005] = {0}; // 注意题目给的N最大是3000，开3005稳妥
    for(int i = 0; i < n; i++) {
        scanf("%d", &number[i]);
    }
    
    // 先计算第一个长度为m的窗口的和
    int current_sum = 0;
    for(int i = 0; i < m; i++) {
        current_sum += number[i];
    }
    
    int min_sum = current_sum; // 假设第一个窗口就是最小的
    
    // 窗口开始往后滑动
    for(int i = m; i < n; i++) {
        // 减去窗口最左边滑出的数，加上右边新进来的数
        current_sum = current_sum - number[i - m] + number[i];
        
        // 如果新的和比之前记录的最小值还小，就更新它
        if(current_sum < min_sum) {
            min_sum = current_sum;
        }
    }
    
    printf("%d\n", min_sum);
    return 0;
}