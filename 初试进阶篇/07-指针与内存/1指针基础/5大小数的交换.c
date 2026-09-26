//输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。写3个函数：①输入10个数；②进行处理；③输出10个数

#include <stdio.h>
//函数1：输入10个数
void input(int *arr, int n)
{
    printf("请输入%d个整数：\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
}

//函数2：进行处理
void process(int *arr, int n)
{
    int min_idx = 0; 
    int max_idx = 0; 
    int temp;

    // 找最小值
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) < *(arr + min_idx))
        {
            min_idx = i;
        }
    }
    //最小值与第一个数对换
    temp = *arr;               
    *arr = *(arr + min_idx);   
    *(arr + min_idx) = temp;   

    //重新找最大值,避免刚才的交换把最大值换走
    max_idx = 0;
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > *(arr + max_idx))
        {
            max_idx = i;
        }
    }
    //最大值与最后一个数对换
    temp = *(arr + n - 1);        
    *(arr + n - 1) = *(arr + max_idx); 
    *(arr + max_idx) = temp;      
}

//函数3：输出10个数
void output(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main(){
    int n = 10;
    int numbers[10];
    
    input(numbers, n);
    process(numbers, n);
    output(numbers, n);
    
    return 0;
}