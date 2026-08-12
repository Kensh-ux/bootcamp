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