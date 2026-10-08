#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);//输入的总数
    int count;
    scanf("%d",&count);//想要表达的数
    int a=0;

    for(; n !=0; n--){
    
    int mask = 1;
    int t = n;//备份原数字
    
    while(t > 9){
        t /= 10;
        mask *= 10;
    }//算位数
    int x=n;
    do{
        int d = x/mask;
        if(d == count){
            a++;
        }
        x %= mask;
        mask /= 10;
    }while(mask > 0);
 }
    printf("%d",a);

    return 0;
}