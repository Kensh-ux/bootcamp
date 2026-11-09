#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int gui_dist = 0;
    int tu_dist = 0;

    //兔子
    int run_time = 0;
    int rest_time = 0;
    int is_resting = 0;//0代表在跑，1代表在休息

    for (int i = 1; i <= T; i++)
    {
        //乌龟一直在跑，每分钟固定跑 3 米
        gui_dist += 3;

        if (is_resting == 0)
        {
            tu_dist += 9;
            run_time++;

            //回头看一眼
            if (run_time == 10)
            {
                if (tu_dist > gui_dist) {
                    //开始休息
                    is_resting = 1;
                    rest_time = 0; //休息清零，准备算 30 分钟
                }
                run_time = 0; // 不管休不休息，跑满 10 分钟这个计时器都要清零，准备下一轮
                //之所以这样搞是防止run_time自增过大，谨慎为主
            }
        } 
        else 
        {   //如果兔子正在休息，则原地不动，距离不增加
            rest_time++;//休息时间 + 1

            //休息满 30 分钟，结束休息
            if (rest_time == 30)
            {
                is_resting = 0; //切换回跑步状态
                run_time = 0;   //跑步计时器清零，准备重新跑 10 分钟
            }
        }
    }

    if (gui_dist > tu_dist) printf("@_@ %d\n", gui_dist);
    else if (tu_dist > gui_dist) printf("^_^ %d\n", tu_dist);
    else printf("-_- %d\n", gui_dist);
    
    return 0;
}