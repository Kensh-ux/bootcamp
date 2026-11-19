#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int id;
    int score;
} Student;

//比较函数：分数降序（从高到低）；分数相同，ID升序（从小到大）
int cmp(const void *a, const void *b) 
{
    Student *s1 = (Student *)a;
    Student *s2 = (Student *)b;
    if (s1->score != s2->score) 
    {
        return s2->score - s1->score; //分数高的在前
    }
    return s1->id - s2->id;//分数相同，ID小的在前
}

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);
    Student stu[5005];
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d %d", &stu[i].id, &stu[i].score);
    }
    
    //直接调用C语言内置的快速排序
    qsort(stu, n, sizeof(Student), cmp);
    
    int temp = m * 3 / 2;
    int score_line = stu[temp - 1].score; //排好序后，第temp个人的分数就是分数线
    
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (stu[i].score >= score_line) 
        {
            count++;
        }
    }
    
    printf("%d %d\n", score_line, count);
    
    for (int i = 0; i < count; i++) 
    {
        printf("%d %d\n", stu[i].id, stu[i].score);
    }
    
    return 0;
}