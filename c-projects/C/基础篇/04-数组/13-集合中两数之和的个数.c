#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int total[105]; // 存输入的数字
    int mark[20005] = {0}; // 标记数组，全部初始化为0，用来记录哪个数已经算过了
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &total[i]);
    }
    
    int sum = 0;
    
    // i 和 j 枚举两个加数，j 从 i+1 开始，避免重复加自己
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int target = total[i] + total[j]; // 这两个数的和
            
            // 再遍历一遍集合，看看有没有这个和
            for (int k = 0; k < n; k++) {
                // 如果集合里存在这个和，且这个和之前没被算过
                if (total[k] == target && mark[target] == 0) {
                    mark[target] = 1; // 标记这个数字已经被算过了
                    sum++;            // 符合条件的数字数量 +1
                }
            }
        }
    }
    
    printf("%d\n", sum);
    return 0;
}