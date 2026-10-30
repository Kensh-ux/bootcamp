// 国王将金币作为工资，发放给忠诚的骑士。第一天，骑士收到一枚金币；之后两天（第二天和第三天），每天收到两枚金币；之后三天（第四、五、六
// 天），每天收到三枚金币；之后四天（第七、八、九、十天），每天收到四枚金币……；这种工资发放模式会一直这样延续下去：当连续 n 天每天收到 
// n 枚金币后，骑士会在之后的连续 n+1 天里，每天收到 n+1 枚金币。

// 请计算在前 k 天里，骑士一共获得了多少金币。

// 输入格式
// 一个正整数 k，表示发放金币的天数。

// 输出格式
// 一个正整数，即骑士收到的金币数。

#include <stdio.h>
int main(){
    int money=0;
    int day_then=1;
    int m=day_then;
    
    int day;
    scanf("%d",&day);

    for(int i=1; i<=day; i++){
        if(m > 0){
            money += day_then;
        }else {
            day_then++;
            m =day_then;
            money += day_then;
        }
        m--;
    }

    printf("%d",money);
    return 0;
}