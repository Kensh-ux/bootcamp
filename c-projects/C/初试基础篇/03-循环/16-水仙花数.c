//水仙花数是指一个N位正整数(N>=3),它的每个位上的数字的N次幂之和等于它本身。例如:153=1^3+5^3+3^3。本题要求编写程序,
//计算所有N位水仙花数。
#include <stdio.h>

int main(){
    int a;//位数
    scanf("%d",&a);
    int min=1,max=1;//位数的最大最小值
    
    //第一版判断位数方法，有点冗杂
    for(int i=1;i < a;i++){
        min *=10;
    }
    for(int j=0;j < a;j++){
        max *=10;
    }
    
    int num =min;//数值变量
    
    while(num <max){
        int digit =0;//计算得数
        num++;
        int t=num;//防止num数据丢失
        
        while(t >0){
            int sum =t%10;
            int b =a;//同上
            int tum =1;
            if(sum > 0){
                for(;b >0;b--){
                
                tum *=sum;//同上
            }digit +=tum;//避免sum为0时tum在初始化为1后相加影响结果
        }
            t /=10;  
            }
        if(digit == num){
            printf("%d\n",num);
        }
    }
    return 0;
}
//标准写法
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n); // 预设输入
//     int first = 1;
//     int i = 1;
    
//     // 1. 确定 n 位数的起始值（例如 n=3 时，first=100）
//     while (i < n) {
//         first *= 10;
//         i++;
//     }

//     i = first;
//     // 2. 遍历所有的 n 位数
//     while (i < first * 10) {
//         int t = i;    // 利用临时变量 t 来拆分当前数字，保证外层 i 不受影响
//         int sum = 0;
        
//         // 3. 使用 do-while 依次取出每一位数字
//         do {
//             int d = t % 10; // 取出当前数字的最后一位
//             t /= 10;        // 去掉最后一位
            
//             // 4. 计算这一位的 n 次幂
//             int p = d;
//             int j = 1;
//             while (j < n) {
//                 p *= d; // 循环乘 d，共乘 n-1 次（因为 p 初始化为 d 本身）
//                 j++;
//             }
            
//             sum += p; // 累加各位的幂
//         } while (t > 0);

//         // 5. 判断是否为水仙花数
//         if (sum == i) {
//             printf("%d\n", i);
//         }
        
//         i++;
//     }

//     return 0;
// }