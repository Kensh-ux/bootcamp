#include<stdio.h>

int main(){
    int num1,num2;

    printf("请输入两个整数(用空格隔开):");
    scanf("%d %d",&num1, &num2);

    printf("\n---计算结果---\n");
    printf("和：%d+%d=%d\n",num1,num2,num1+num2);
    printf("差: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("积: %d * %d = %d\n", num1, num2, num1 * num2);

    if (num2!=0){
        printf("商（整数）:%d/%d=%d\n",num1,num2,num1/num2);
        printf("余: %d %% %d = %d\n", num1, num2, num1 % num2);

    }else{
        printf("除数不能为0!\n");
    }
    
    return 0;
}