#include <stdio.h>

// 把大小改成 1005 或 1010
int yv[1005] = {0};
int shu[1005] = {0};
int wai[1005] = {0};

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &yv[i], &shu[i], &wai[i]);
    }
    
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            // 判断三科差值都在 -5 到 5 之间（等价于绝对值 <=5）
            if((yv[i] - yv[j] >= -5 && yv[i] - yv[j] <= 5) &&
               (shu[i] - shu[j] >= -5 && shu[i] - shu[j] <= 5) &&
               (wai[i] - wai[j] >= -5 && wai[i] - wai[j] <= 5)){
                
                int diff = (yv[i] + shu[i] + wai[i]) - (yv[j] + shu[j] + wai[j]);
                // 总分差也在 -10 到 10 之间
                if(diff >= -10 && diff <= 10){
                    sum++;
                }
            }
        }
    }
    
    printf("%d\n", sum);
    return 0;
}