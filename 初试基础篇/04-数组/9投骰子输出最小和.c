//（暴力枚举 + 桶计数）

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // 开一个数组来记录每种和出现的次数（最大60，开100够用了）
    int sum_count[100] = {0};

    // 枚举三个骰子的所有点数组合
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                sum_count[i + j + k]++; // 这种点数和的组合数+1
            }
        }
    }

    // 找出出现次数最多的和，如果次数相同，找较小的和
    int max_sum = 3; // 从最小的可能和3开始
    for (int i = 4; i <= a + b + c; i++) {
        // 这里必须是大于（>），不能是大于等于（>=）
        // 这样如果遇到同样的次数，就不会更新，保持了最小的和
        if (sum_count[i] > sum_count[max_sum]) {
            max_sum = i;
        }
    }

    printf("%d\n", max_sum);
    return 0;
}