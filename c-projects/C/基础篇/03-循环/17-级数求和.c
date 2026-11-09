#include <stdio.h>

int main() {
    double a = 0;
    double b = 1;
    int i = 1;
    int k;
    scanf("%d", &k);
    
    for(; a < k; i++) {
        b = 1.0 / i;   
        a = a + b;
    }
    if(i == 2) {
        printf("%d", i);
    } else {
        printf("%d", i - 1);
    }
    return 0;
}

//更好的方法
// #include <stdio.h>

// int main() {
//     double a = 0;    // 总和
//     int i = 0;       // 记录当前是第几个数
//     int k;
//     scanf("%d", &k);
    
//     // 只要总和还小于等于 k，就继续叠加
//     while (a <= k) {
//         i++;                // 先把分母 n 增加 1
//         a = a + 1.0 / i;    // 再加上 1/n
//     }
    
//     printf("%d", i);        // 此时 i 就是满足条件的最小整数
//     return 0;
// }