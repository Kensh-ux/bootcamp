// #include <stdio.h>
// int main(){
//     int i=0;
//     int j=0;
//     int k=0;
//     for(i=1;i<10;i++){
//         for(j=1;j<10;j++){
//             for(k=1;k<10;k++){
//                 if(i!=j&&i!=k&&j!=k){
//                     if((i*100+j*10+k)*3<1000){
//                         printf("%d %d %d\n",i*100+j*10+k,(i*100+j*10+k)*2,(i*100+j*10+k)*3);
//                     }
//                 }
//             }
//         }
//     }
//     return 0;
// 傻了
#include <stdio.h>

int main() {
    int a, b, c;
    // a 最多只能取到 987/3 = 329，因为 a*3 必须还是一个三位数
    for (a = 123; a <= 329; a++) {
        b = a * 2;
        c = a * 3;
        
        // 1. 把三个三位数拆分成 9 个单独的数字
        int a1 = a / 100, a2 = a / 10 % 10, a3 = a % 10;
        int b1 = b / 100, b2 = b / 10 % 10, b3 = b % 10;
        int c1 = c / 100, c2 = c / 10 % 10, c3 = c % 10;

        // 2. 用加法和乘法判断这 9 个数字是否正好是 1~9
        int sum = a1 + a2 + a3 + b1 + b2 + b3 + c1 + c2 + c3;
        int mul = a1 * a2 * a3 * b1 * b2 * b3 * c1 * c2 * c3;
        
        // 如果数字总和是 45，且乘积是 362880，说明绝对完美利用了 1~9
        if (sum == 45 && mul == 362880) {
            printf("%d %d %d\n", a, b, c);
        }
    }

    return 0;
}